#include <iostream>
#include <stdexcept>
using namespace std;
class AgeException : public exception {
    string message;
public:
    AgeException(string msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};
class Person {
    int age;
public:
    void setAge(int a) {
        try {
            if (a < 0)
                throw AgeException("Age cannot be negative!");
            else if (a > 120)
                throw AgeException("Age seems unrealistic!");
            age = a;
            cout << "Age set to: " << age << endl;
        }
        catch (AgeException &e) {
            cout << "Custom Exception: " << e.what() << endl;
        }
    }
};
int main() {
    Person p1;
    p1.setAge(25);   
    p1.setAge(-3);   
    p1.setAge(150);  
}
