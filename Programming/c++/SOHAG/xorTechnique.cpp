#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c;
    cin >> n >> c;
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int y = i ^ c;
        if (y >= 0 & y <= n)
        {
            ++ans;
        }
    }
    cout << ans << '\n';
    return 0;
}
    // 8 4 2 1
