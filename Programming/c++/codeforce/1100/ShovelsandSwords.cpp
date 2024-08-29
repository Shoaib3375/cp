#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int s, d;
    cin >> s >> d;
    cout << min((s + d) / 3, min(s, d))<<endl;
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