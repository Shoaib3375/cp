#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll dp[100123];

ll fact( ll n )
{
    if ( n == 0 ) return 1;
    if ( dp[n] != 0 ) return dp[n];

    ll res = (n * fact(n-1) ) % MOD;
    dp[n] = res;
    return dp[n];
}

int main()
{
    optimize();

    int t;
    cin >> t;
    while ( t-- ) {
        ll n;
        cin >> n;
        cout << fact(n) << endl;
    }

    return 0;
}
