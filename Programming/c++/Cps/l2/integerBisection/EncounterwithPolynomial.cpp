#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c, k;
ll solve(ll x)
{
    // aX2 + BX + C >= K .
    return (a * x * x + b * x + c);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        cin >> a >> b >> c >> k;
        ll l = 0, r = 2e5;
        ll ans = -1;

        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (solve(mid)>=k)
            {
                ans = mid;
                r = mid -1;
            }else{
                l = mid + 1;
            }
        }
        cout << ans <<endl;
    }
}