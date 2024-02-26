#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

int main()
{
    int m,n,a;
    cin >> m>> n>>a;
    ll x = ceil((double)m/a);
    ll y = ceil((double)n/a);
    ll ans  = x *y;
    cout << ans;
    return 0;
}