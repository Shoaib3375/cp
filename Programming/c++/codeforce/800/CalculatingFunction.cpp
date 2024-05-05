#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll ans;
    if (n % 2 == 0)
    {
        ans = n / 2;
        cout << ans << endl;
    }
    else
    {
        ans = (n / 2) + 1;
        cout << "-" << ans << endl;
    }
    return 0;
}