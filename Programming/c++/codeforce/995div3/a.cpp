#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        for (auto &i : b)
        {
            cin >> i;
        }
        int ans = a[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            ans += max(0, a[i] - b[i + 1]);
        }
        cout << ans << endl;
    }
}