#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        ll num, k;
        cin >> num >> k;
        for (ll i = 2; i <= k; i++)
        {
            ll x = 9, y = 0, presentValue = num;
            while (presentValue)
            {
                x = min(x, presentValue % 10);
                y = max(y, presentValue % 10);
                presentValue /= 10;
            }
            if (!x)
                break;
            num += (x * y);
        }
        cout << num << endl;
    }

    return 0;
}