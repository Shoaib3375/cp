#include <bits/stdc++.h>
using namespace std;
void solve()
{

    string s;
    cin >> s;
    string r = s;
    sort(r.begin(), r.end());
    if (s != r)
    {
        cout << "YES" << endl;
        cout << r << endl;
        return;
    }
    reverse(s.begin(), s.end());
    if (s != r)
    {
        cout << "YES" << endl;
        cout << r << endl;
        return;
    }
    cout << "NO" << endl;
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