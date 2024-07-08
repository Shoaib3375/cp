#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mem(a,b) memset(a, b, sizeof(a) )
#define MOD 10000007
ll dp[10123];
int a, b, c, d, e, f;
int fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if (dp[n] !=-1)
    {
        return dp[n];
    }
    ll res =  fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
    dp[n] = res%mod;
    return dp[n];
}
int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int t = 1; t <= cases; ++t) {
        mem(dp,-1);
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", t, fn(n) % MOD);
    }
    return 0;
}