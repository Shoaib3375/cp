// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a;
//     char c;
//     cin >> a;
//     c = a;
//     cout << c ;
    
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     float n;
//     float res;
//     cin >> n;
//     if (n == 2)
//     {
//         res = pow(5,n) % 10;
//         res=res + 1;

//         cout << res;
        
//     }else if (n > 2)
//     {
//         res = pow(5,n) % 100;
//         res +=1;
//         cout << res;
//     }
    
// }

// #include <bits/stdc++.h>
// using namespace std;

// int solve(int n){
//             int x=1, y, z;

//         for (int i = 2; i <= 10; i++)
//         {
//             y = i;
//             z = n-i-1;

//             if (x!=y && y!=z && z!=x && x>0 && y>0 && z>0 && x%3 && y%3 && z%3)
//             {
//                cout<<"YES\n"<<x<<" "<<y<<" "<<z<<"\n";
//                return 0; 
//             }         
//         }
//         cout << "NO\n";
//         return 0;

// }
// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         solve(n);
//     }

//     return 0;
// }

// Du contest

// #include <bits/stdc++.h>

// using namespace std;

// int countWaysToMakeSumEven(int n, vector<int>& arr) {
//     int evenCount = 0, oddCount = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }

//     if (accumulate(arr.begin(), arr.end(), 0) % 2 == 0) {
//         return 1;
//     } else if (evenCount > 0 && oddCount > 0) {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int main() {
//     int T;
//     cin >> T;

//     for (int t = 0; t < T; t++) {
//         int n;
//         cin >> n;
//         vector<int> arr(n);

//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         int result = countWaysToMakeSumEven(n, arr);
//         cout << result << endl;
//     }

//     return 0;
// }


//A. first year
// #include <iostream>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int a, b;
//         cin >> a >> b;
        
        
//         cout << b << " " << (a - b) << endl;
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }


// int lcm(int a, int b) {
//     return a / gcd(a, b) * b;
// }


// int countBeautifulNumbers(int L, int R) {
//     int count = 0;
    
//     for (int i = L; i <= R; i++) {
//         int pairs = 0;
//         for (int a = 1; a * a <= i; a++) {
//             if (i % a == 0) {
//                 int b = i / a;
//                 if (a == b) {
//                     pairs++;
//                 } else {
//                     pairs += 2;
//                 }
//             }
//         }
//         if (pairs % 2 == 1) {
//             count++;
//         }
//     }
    
//     return count;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int L, R;
//         cin >> L >> R;
//         int beautifulCount = countBeautifulNumbers(L, R);
//         cout << beautifulCount << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// // Function to count beautiful numbers
// int countBeautifulNumbers(int L, int R) {
//     // Count the number of beautiful numbers between 1 and sqrt(R)
//     int sqrtR = sqrt(R);
//     int beautifulCount = sqrtR;

//     // Check if L is less than or equal to sqrt(R), if so, subtract 1
//     if (L <= sqrtR) {
//         beautifulCount--;
//     }

//     return max(0, beautifulCount);
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int L, R;
//         cin >> L >> R;
//         int beautifulCount = countBeautifulNumbers(L, R);
//         cout << beautifulCount << endl;
//     }

//     return 0;
// }
