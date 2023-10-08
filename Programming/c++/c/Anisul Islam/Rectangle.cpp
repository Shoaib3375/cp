#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double width, heigh, area;
    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> heigh;

    area = heigh * width;

    cout << "Area = " << area;
    getch();
}