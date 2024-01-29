#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    int n;
    cin >> n;
    int max = 0;
    while (n--)
    {
        ll x;
        cin >> x;
        if (x > max)
        {
            max = x;
        }
    }
    cout << max << endl;
}