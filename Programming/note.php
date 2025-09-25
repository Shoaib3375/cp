<?php
/**
 * Laravel 12 API Skeleton for Study Tracker & Timer
 * Features: Google OAuth (Socialite), Subjects with daily goals, contribution grid, friends visibility,
 * study rooms, room tasks with real-time broadcasts (Laravel WebSockets/Pusher compatible).
 *
 * Notes:
 * - Replace placeholders (YOUR_PUSHER_KEY, etc.).
 * - Run: composer require laravel/socialite predis/predis pusher/pusher-php-server
 * - php artisan migrate
 */

// routes/api.php
use Illuminate\Http\Request;
use Illuminate\Support\Facades\Route;
use App\Http\Controllers\AuthController;
use App\Http\Controllers\SubjectController;
use App\Http\Controllers\GoalController;
use App\Http\Controllers\FriendController;
use App\Http\Controllers\RoomController;
use App\Http\Controllers\TaskController;

Route::post('/auth/google', [AuthController::class, 'google']); // exchange idToken -> app token

Route::middleware('auth:sanctum')->group(function () {
    Route::get('/me', [AuthController::class, 'me']);

    Route::apiResource('subjects', SubjectController::class);
    Route::get('subjects/{subject}/goals', [GoalController::class, 'index']);
    Route::post('subjects/{subject}/goals/split', [GoalController::class, 'split']);
    Route::patch('goals/{goal}', [GoalController::class, 'update']);

    Route::get('friends', [FriendController::class, 'index']);
    Route::post('friends/{friend}/toggle-visibility', [FriendController::class, 'toggleVisibility']);

    Route::apiResource('rooms', RoomController::class)->only(['index','store','show','destroy']);
    Route::post('rooms/{room}/invite', [RoomController::class, 'invite']);

    Route::get('rooms/{room}/tasks', [TaskController::class, 'index']);
    Route::post('rooms/{room}/tasks', [TaskController::class, 'store']);
    Route::patch('tasks/{task}/complete', [TaskController::class, 'complete']);
});

// app/Models/User.php
namespace App\Models;
use Illuminate\Foundation\Auth\User as Authenticatable;
use Laravel\Sanctum\HasApiTokens;
use Illuminate\Notifications\Notifiable;

class User extends Authenticatable
{
    use HasApiTokens, Notifiable;

    protected $fillable = ['name','email','avatar','google_id','handle','allow_friends_view'];
    protected $casts = ['allow_friends_view' => 'boolean'];
}

// database/migrations/2025_08_16_000001_create_users_table.php
use Illuminate\Database\Migrations\Migration;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Support\Facades\Schema;
return new class extends Migration {
    public function up(): void {
        Schema::create('users', function (Blueprint $table) {
            $table->id();
            $table->string('name');
            $table->string('email')->unique();
            $table->string('avatar')->nullable();
            $table->string('google_id')->nullable()->unique();
            $table->string('handle')->unique();
            $table->boolean('allow_friends_view')->default(true);
            $table->timestamps();
        });
    }
    public function down(): void { Schema::dropIfExists('users'); }
};

// database/migrations/2025_08_16_000100_create_subjects_and_goals.php
use Illuminate\Database\Migrations\Migration;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Support\Facades\Schema;
return new class extends Migration {
    public function up(): void {
        Schema::create('subjects', function (Blueprint $table) {
            $table->id();
            $table->foreignId('user_id')->constrained()->cascadeOnDelete();
            $table->string('name');
            $table->string('color', 32)->default('emerald');
            $table->date('start_date');
            $table->unsignedInteger('total_days');
            $table->timestamps();
        });
        Schema::create('goals', function (Blueprint $table) {
            $table->id();
            $table->foreignId('subject_id')->constrained()->cascadeOnDelete();
            $table->date('date');
            $table->string('topic');
            $table->boolean('completed')->default(false);
            $table->unsignedInteger('minutes')->default(0);
            $table->timestamps();
            $table->unique(['subject_id','date']);
        });
    }
    public function down(): void {
        Schema::dropIfExists('goals');
        Schema::dropIfExists('subjects');
    }
};

// database/migrations/2025_08_16_000200_create_social_and_rooms.php
use Illuminate\Database\Migrations\Migration;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Support\Facades\Schema;
return new class extends Migration {
    public function up(): void {
        Schema::create('friendships', function (Blueprint $table) {
            $table->id();
            $table->foreignId('user_id')->constrained('users')->cascadeOnDelete();
            $table->foreignId('friend_id')->constrained('users')->cascadeOnDelete();
            $table->boolean('can_view_me')->default(false);
            $table->timestamps();
            $table->unique(['user_id','friend_id']);
        });
        Schema::create('rooms', function (Blueprint $table) {
            $table->id();
            $table->foreignId('creator_id')->constrained('users')->cascadeOnDelete();
            $table->string('name');
            $table->string('code')->unique();
            $table->timestamps();
        });
        Schema::create('room_members', function (Blueprint $table) {
            $table->id();
            $table->foreignId('room_id')->constrained('rooms')->cascadeOnDelete();
            $table->foreignId('user_id')->constrained('users')->cascadeOnDelete();
            $table->string('role')->default('member');
            $table->timestamps();
            $table->unique(['room_id','user_id']);
        });
        Schema::create('tasks', function (Blueprint $table) {
            $table->id();
            $table->foreignId('room_id')->constrained('rooms')->cascadeOnDelete();
            $table->string('title');
            $table->enum('status',["pending","done"])->default('pending');
            $table->foreignId('assigned_to')->nullable()->constrained('users')->nullOnDelete();
            $table->foreignId('completed_by')->nullable()->constrained('users')->nullOnDelete();
            $table->timestamps();
        });
    }
    public function down(): void {
        Schema::dropIfExists('tasks');
        Schema::dropIfExists('room_members');
        Schema::dropIfExists('rooms');
        Schema::dropIfExists('friendships');
    }
};

// app/Http/Controllers/AuthController.php
namespace App\Http\Controllers;
use App\Models\User;
use Illuminate\Http\Request;
use Illuminate\Support\Str;
use Laravel\Sanctum\PersonalAccessToken;

class AuthController extends Controller
{
    public function google(Request $request)
    {
        /** Expect: { idToken: string, profile: { name, email, picture } } verified on client via Google SDK */
        $request->validate(['profile.name'=>'required','profile.email'=>'required|email']);
        $profile = $request->input('profile');
        $user = User::firstOrCreate(
            ['email' => $profile['email']],
            [
                'name' => $profile['name'],
                'avatar' => $profile['picture'] ?? null,
                'handle' => 'u_'.Str::random(8),
                'allow_friends_view' => true,
            ]
        );
        $token = $user->createToken('app')->plainTextToken;
        return response()->json(['token'=>$token,'user'=>$user]);
    }

    public function me(Request $request)
    {
        return $request->user();
    }
}

// app/Http/Controllers/SubjectController.php
namespace App\Http\Controllers;
use App\Models\Subject;
use Illuminate\Http\Request;

class SubjectController extends Controller
{
    public function index(Request $request){
        return Subject::where('user_id',$request->user()->id)->latest()->get();
    }
    public function store(Request $request){
        $data = $request->validate([
            'name'=>'required|string','color'=>'nullable|string','start_date'=>'required|date','total_days'=>'required|integer|min:1'
        ]);
        $data['user_id'] = $request->user()->id;
        return Subject::create($data);
    }
    public function show(Request $request, Subject $subject){
        $this->authorizeSubject($request,$subject);
        return $subject;
    }
    public function update(Request $request, Subject $subject){
        $this->authorizeSubject($request,$subject);
        $subject->update($request->only('name','color','start_date','total_days'));
        return $subject->refresh();
    }
    public function destroy(Request $request, Subject $subject){
        $this->authorizeSubject($request,$subject);
        $subject->delete();
        return response()->noContent();
    }
    private function authorizeSubject(Request $request, Subject $subject){
        abort_unless($subject->user_id === $request->user()->id, 403);
    }
}

// app/Models/Subject.php
namespace App\Models;
use Illuminate\Database\Eloquent\Model;

class Subject extends Model
{
    protected $fillable = ['user_id','name','color','start_date','total_days'];
    public function goals(){ return $this->hasMany(Goal::class); }
    public function user(){ return $this->belongsTo(User::class); }
}

// app/Models/Goal.php
namespace App\Models;
use Illuminate\Database\Eloquent\Model;

class Goal extends Model
{
    protected $fillable = ['subject_id','date','topic','completed','minutes'];
    protected $casts = ['date'=>'date','completed'=>'boolean'];
    public function subject(){ return $this->belongsTo(Subject::class); }
}

// app/Http/Controllers/GoalController.php
namespace App\Http\Controllers;
use App\Models\Goal;
use App\Models\Subject;
use Illuminate\Http\Request;
use Carbon\Carbon;

class GoalController extends Controller
{
    public function index(Request $request, Subject $subject){
        $this->authorizeSubject($request,$subject);
        return $subject->goals()->orderBy('date')->get();
    }
    public function split(Request $request, Subject $subject){
        $this->authorizeSubject($request,$subject);
        $data = $request->validate(['topics'=>'array','topics.*'=>'string']);
        $topics = $data['topics'] ?? [];
        $goals = [];
        for ($i=0; $i<$subject->total_days; $i++) {
            $date = Carbon::parse($subject->start_date)->addDays($i)->toDateString();
            $topic = $topics ? $topics[$i % count($topics)] : ($subject->name.' – Day '.($i+1));
            $goals[] = Goal::updateOrCreate(
                ['subject_id'=>$subject->id,'date'=>$date],
                ['topic'=>$topic]
            );
        }
        return $goals;
    }
    public function update(Request $request, Goal $goal){
        $this->authorizeSubject($request,$goal->subject);
        $goal->update($request->only('completed','minutes','topic'));
        return $goal->refresh();
    }
    private function authorizeSubject(Request $request, Subject $subject){
        abort_unless($subject->user_id === $request->user()->id, 403);
    }
}

// app/Http/Controllers/FriendController.php
namespace App\Http\Controllers;
use App\Models\User;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class FriendController extends Controller
{
    public function index(Request $request){
        $friends = DB::table('friendships')
            ->join('users','users.id','=','friendships.friend_id')
            ->where('friendships.user_id',$request->user()->id)
            ->select('users.id','users.name','users.handle','friendships.can_view_me')
            ->get();
        return $friends;
    }
    public function toggleVisibility(Request $request, User $friend){
        $row = DB::table('friendships')->updateOrInsert(
            ['user_id'=>$request->user()->id,'friend_id'=>$friend->id],
            ['can_view_me'=> DB::raw('NOT COALESCE(can_view_me,false)')]
        );
        return response()->json(['ok'=>true]);
    }
}

// app/Models/Room.php
namespace App\Models;
use Illuminate\Database\Eloquent\Model;
class Room extends Model{ protected $fillable=['creator_id','name','code']; }

// app/Models/Task.php
namespace App\Models;
use Illuminate\Database\Eloquent\Model;
class Task extends Model{ protected $fillable=['room_id','title','status','assigned_to','completed_by']; }

// app/Http/Controllers/RoomController.php
namespace App\Http\Controllers;
use App\Models\Room; use App\Models\User; use App\Models\Subject; use Illuminate\Http\Request; use Illuminate\Support\Str; use Illuminate\Support\Facades\DB;
class RoomController extends Controller
{
    public function index(Request $request){
        return Room::whereIn('id', function($q) use ($request){
            $q->select('room_id')->from('room_members')->where('user_id',$request->user()->id);
        })->latest()->get();
    }
    public function store(Request $request){
        $data = $request->validate(['name'=>'required|string']);
        $room = Room::create([
            'creator_id'=>$request->user()->id,
            'name'=>$data['name'],
            'code'=>Str::slug($data['name']).'-'.Str::random(4)
        ]);
        DB::table('room_members')->insert(['room_id'=>$room->id,'user_id'=>$request->user()->id,'role'=>'owner','created_at'=>now(),'updated_at'=>now()]);
        return $room;
    }
    public function show(Room $room){ return $room; }
    public function destroy(Request $request, Room $room){ abort_unless($room->creator_id === $request->user()->id, 403); $room->delete(); return response()->noContent(); }
    public function invite(Request $request, Room $room){
        $data = $request->validate(['user_id'=>'required|exists:users,id']);
        DB::table('room_members')->updateOrInsert(['room_id'=>$room->id,'user_id'=>$data['user_id']],['role'=>'member','updated_at'=>now(),'created_at'=>now()]);
        return response()->json(['ok'=>true]);
    }
}

// app/Http/Controllers/TaskController.php
namespace App\Http\Controllers;
use App\Models\Task; use App\Models\Room; use Illuminate\Http\Request; use App\Events\TaskCompleted;
class TaskController extends Controller
{
    public function index(Room $room){ return Task::where('room_id',$room->id)->latest()->get(); }
    public function store(Request $request, Room $room){
        $data = $request->validate(['title'=>'required|string','assigned_to'=>'nullable|exists:users,id']);
        return Task::create(['room_id'=>$room->id,'title'=>$data['title'],'assigned_to'=>$data['assigned_to'] ?? null]);
    }
    public function complete(Request $request, Task $task){
        $task->update(['status'=>'done','completed_by'=>$request->user()->id]);
        broadcast(new TaskCompleted($task))->toOthers();
        return $task->refresh();
    }
}

// app/Events/TaskCompleted.php
namespace App\Events;
use App\Models\Task; use Illuminate\Broadcasting\InteractsWithSockets; use Illuminate\Contracts\Broadcasting\ShouldBroadcast; use Illuminate\Broadcasting\PrivateChannel;
class TaskCompleted implements ShouldBroadcast
{
    use InteractsWithSockets; public function __construct(public Task $task){}
    public function broadcastOn(){ return new PrivateChannel('rooms.'.$this->task->room_id.'.tasks'); }
    public function broadcastAs(){ return 'task.completed'; }
}

// app/Providers/BroadcastServiceProvider.php (ensure channels)
// routes/channels.php
use Illuminate\Support\Facades\Broadcast;
Broadcast::channel('rooms.{roomId}.tasks', function ($user, $roomId) {
    return \DB::table('room_members')->where('room_id',$roomId)->where('user_id',$user->id)->exists();
});

// config/broadcasting.php (set pusher) and .env
// PUSHER_APP_ID=xxx
// PUSHER_APP_KEY=YOUR_PUSHER_KEY
// PUSHER_APP_SECRET=YOUR_PUSHER_SECRET
// PUSHER_HOST=127.0.0.1 (if websockets server)
// PUSHER_PORT=6001
// PUSHER_SCHEME=http

// Example Frontend Calls
/**
POST /api/subjects { name, color:"emerald", start_date:"2025-08-16", total_days:30 }
POST /api/subjects/{id}/goals/split { topics:["Algebra","Geometry",...] }
PATCH /api/goals/{goalId} { completed:true, minutes:50 }
POST /api/rooms { name:"DSA Prep" }
POST /api/rooms/{roomId}/tasks { title:"Leetcode 10" }
PATCH /api/tasks/{taskId}/complete
*/
