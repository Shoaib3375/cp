#include <iostream>
#include <stdexcept>
using namespace std;
class Divider
{
private:
    int a, b;
public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void divide()
    {
        try
        {
            if (b == 0)
                throw runtime_error("Division by zero is not valid");

            cout << "Result: " << a / b << endl;
        }
        catch (runtime_error &e)
        {
            cerr << "Error: " << e.what() << endl;
        }
    }
};
int main()
{
    Divider d;
    d.input();
    d.divide();

    return 0;
}
