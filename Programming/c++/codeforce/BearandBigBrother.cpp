#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    ll a, b;
    cin >> a >> b;
    int year = 0;
    while (a<=b)
    {
        a = a * 3;
        b = b * 2;
        year++;
    }
    cout << year << endl;
}