#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll x = n / k;
        if (x >= m)
            cout << m << endl;
        else
        {
            ll q = ((m - x) / (k - 1));
            if ((m - x) % (k - 1) != 0)
                q++;
            cout << x - q << endl;
        }
    }

    return 0;
}