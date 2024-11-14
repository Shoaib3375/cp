#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 10000007
ll dp[10123];
int a, b, c, d, e, f;

int fn(int n)
{
    if (dp[n] != -1)
        return dp[n];

    if (n == 0)
        return dp[n] = a;
    if (n == 1)
        return dp[n] = b;
    if (n == 2)
        return dp[n] = c;
    if (n == 3)
        return dp[n] = d;
    if (n == 4)
        return dp[n] = e;
    if (n == 5)
        return dp[n] = f;

    dp[n] = (fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6)) % MOD;
    return dp[n];
}
int main()
{
    int n, cases;
    scanf("%d", &cases);
    for (int t = 1; t <= cases; ++t)
    {
        memset(dp, -1, sizeof(dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", t, fn(n) % MOD);
    }
    return 0;
}

/*

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, x, i;
    int dp[10001];
    int n, caseno = 0, cases;
    cin >> cases;
    while (cases--) {
        cin >> a >> b >> c >> d >> e >> f >> n;
        dp[0] = a % 10000007;
        dp[1] = b % 10000007;
        dp[2] = c % 10000007;
        dp[3] = d % 10000007;
        dp[4] = e % 10000007;
        dp[5] = f % 10000007;
        x = dp[0] + dp[1] + dp[2] + dp[3] + dp[4];
        for (i = 6; i <= n; i++) {
            x = x + dp[i - 1];
            dp[i] = x % 10000007;
            x = x - dp[i - 6];
        }
        cout << "Case " << ++caseno << ": " << dp[n] << endl;
    }
    return 0;
}

 */