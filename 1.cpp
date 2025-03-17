#include <bits/stdc++.h>
using namespace std;
char getGrade(int score) {
    if (score >= 90) return 'A';
    else return 'B';
}
int main()
{
    double radius; 
    cin >> radius;
    double areaofcircle = area(radius);
    cout << "The area of the circle is: " << areaofcircle << endl;
    return 0;
}