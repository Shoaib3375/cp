// We calculate triangle area..
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double base, height, area;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter Height: ";
    cin >> height;
    area = (double)1 / 2 * base * height;

    cout << "Area of triangle = " << area;
    getch();
}