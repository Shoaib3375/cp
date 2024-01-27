#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

void solve()
{
    ll x,n;
    cin>> x>>n;
    int ans =1;
    for (int i = 1; i <= x/i; ++i)
    {
        auto check = [&](int k){
            if (x/k>=n)
            {
                ans = max(ans,k);
            }
        };
        if (x % i  == 0)
        {
            check(i);
            check(x/i);
        }
    }
    cout<<ans<<endl;
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
