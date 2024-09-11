#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b)
        swap(a, b);
    if (c > d)
        swap(c, d);
    if (c > a && d < b)
    {
        cout << "NO\n";
        return;
    }
    if (a > c && b < d)
    {
        cout << "NO\n";
        return;
    }
    if (c > b)
    {
        cout << "NO\n";
    }
    if (a > d)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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