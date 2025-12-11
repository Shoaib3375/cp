#include <iostream>
#include <thread>
#include <stdexcept>
using namespace std;
class Task {
private:
    int value;
public:
    Task(int x) : value(x) {}
    void execute() {
        try {
            if (value == 0) {
                throw runtime_error("Zero not allowed!");
            }
            cout << "Task running with value: " << value << endl;
        } catch (exception &e) {
            cout << "Thread error: " << e.what() << endl;
        }
    }
    int getValue() const {
        return value;
    }
};
int main() {
    Task task1(10);
    Task task2(0);
    thread t1(&Task::execute, &task1);
    thread t2(&Task::execute, &task2);
    t1.join();
    t2.join();
    return 0;
}