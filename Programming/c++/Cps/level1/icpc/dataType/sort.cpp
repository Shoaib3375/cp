#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    int a, b, c,hi, mid, lo;
    cin >> a >> b >> c;

    if (a > b)
    {
        mid = a;
        lo = b;
    }
    else
    {
        mid = b;
        lo = a;
    }

    if (mid > c)
    {
        hi = mid;
        if (lo > c)
        {
            mid = lo;
            lo = c;
        }
        else
        {
            mid = c;
        }
    }
    else
    {
        hi = c;
    }

    cout << lo << endl
         << mid << endl
         << hi << endl;
    cout << endl;
    cout << a << endl
         << b << endl
         << c << endl;
}