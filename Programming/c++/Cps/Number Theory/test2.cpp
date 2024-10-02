#include <bits/stdc++.h>
using namespace std;

int const mx = 1e3 + 123;
bitset<mx> isPrime;
int cnt, primes[mx];

void solve()
{
    long long n;
    cin >> n;
    long long l = 1, r = 2e18;
    long long ans = 0;
    while (l <= r)
    {
        long long mid = (l + r) >> 1;
        long sq = sqrt(mid);
        while (sq * sq > mid)
        {
            sq--;
        }
        while ((sq + 1) * (sq + 1) <= mid)
        {
            sq++;
        }

        long long cnt = mid - sq;
        if (cnt >= n)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}