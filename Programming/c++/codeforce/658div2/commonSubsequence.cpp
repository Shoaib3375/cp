#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll arr[1001], ok = 0, b[m + 1];
        memset(arr, 0, sizeof(arr));

        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            arr[x] = 1;
        }

        for (ll i = 1; i <= m; i++)
        {
            ll x;
            cin >> x;
            b[i] = x;

            if (arr[x])
                ok = i;
        }

        if (ok)
            cout << "YES" << endl
                 << 1 << " " << b[ok] << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}