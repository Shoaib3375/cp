#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // Temperature conversion Formulas
    // F ---> 1.8c + 32 ------ (i)
    // C ---> (F-32)/1.8 ----- (ii)
    // K----> C+273 ---------- (iii)

    // Celsius to Fahrenheit

    // double farn, cels;
    // cout << "Enter celsius : ";
    // cin >> cels;

    // farn = 1.8 * cels + 32;

    // cout << " Fahrenheit = " << farn;
    // getch();
    // ##############################

    // Fahrenheit to Celsius
    double farn, cels;
    cout << "Enter Fahrenheit: ";
    cin >> farn;

    cels = (farn - 32) / 1.8;

    cout << "Fahrenhheit = " << cels;
    getch();
}