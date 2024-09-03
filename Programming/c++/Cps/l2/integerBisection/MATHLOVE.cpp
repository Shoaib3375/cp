#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll n)
{
    return (n * (n + 1)) / 2;
}
int main()
{
    ll t;
    scanf("%lld", &t);

    while (t--)
    {
        ll x;
        scanf("%lld", &x);
        ll ans = -1;
        ll l = 1, r = 1e5;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (solve(mid) == x)
            {
                ans = mid;
                break;
            }
            if (solve(mid) < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (ans == -1)
            printf("NAI\n");
        else
            cout << ans << '\n';
    }
}