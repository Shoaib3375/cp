#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;
    if (y == x + 1)
    {
        cout << "Yes\n";
    }
    else if (y < x && (x - y + 1) % 9 == 0)
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";
}

int main()
{
    
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}