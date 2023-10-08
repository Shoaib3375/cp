#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double pi = 3.1416, radius, area;

    cout << "enter radius: ";
    cin >> radius;

    area = pi * radius * radius;

    cout << "Area of circle = " << area;
    getch();
}