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
    ll res =  ((fn(n-1)%MOD) + (fn(n-2)%MOD) + (fn(n-3)%MOD) + (fn(n-4)%MOD) + (fn(n-5)%MOD) + (fn(n-6)%MOD))%MOD;
    dp[n] = res;
    return dp[n];
}
int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int t = 1; t <= cases; ++t) {
        mem(dp,-1);
        cin>> a>> b>>c>>d>>e>>f>>n;
        
        cout << "Case "<< t<<": "<<fn(n)%MOD<<endl;
        
    }
    return 0;
}