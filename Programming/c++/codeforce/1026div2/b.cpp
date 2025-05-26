#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    for (int i = 1; i < n-1; i++)
    {
        if (s[i] == '(')
        {
            cnt++;
        }
        else
            cnt--;
        if (cnt < 0)
        {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}