#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n;
        ll a[n], c = 0;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 1)
                c++;
            else
                break;
        }

        if (c == n)
            c--;
        if (c % 2)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }

    return 0;
}