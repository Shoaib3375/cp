#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 2e5 + 123;
ll arr[mx];
int n, k;
bool solve(ll value)
{
    ll sum = 0;
    for (int i = (n / 2) + 1; i <= n; i++)
    {
        sum += max(0LL, value - arr[i]);
    }
    return (sum <= k);
}
int main()
{

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
    ll l = 0, r = 2e9 + 123;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (solve(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
    return 0;
}