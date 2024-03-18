#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const ll mx = 10e9 + 123;
char grid[101][101];
int x[123], y[123];
int main()
{
    int t, ans, x, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> ans;
        n--;
        while (n--)
        {
            cin >> x;
            ans = ans - ans % x + x;
        }
        cout << ans << endl;
    }
}