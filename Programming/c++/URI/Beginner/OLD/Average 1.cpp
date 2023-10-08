// Problem 1005 Average 1
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float A, B, med;
    cin >> A >> B;
    med = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5);
    cout << "MEDIA = " << med << endl;
    getch();
}