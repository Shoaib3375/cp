#include <bits/stdc++.h>
using namespace std;

int main()
{

    double squareArea;
    double circleArea;
    double area;
    int t;

    cin >> t;
    int i = 1;
    while (t--)
    {
        double r;
        cin >> r;
        circleArea = 2 * acos(0.0) * r * r;
        squareArea = (2 * r) * (2 * r);
        area = squareArea - circleArea;

        printf("Case %d: %.2lf\n", i, area);
        i++;
    }
}