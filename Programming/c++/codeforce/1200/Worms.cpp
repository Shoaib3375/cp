#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int mx = 1e5 + 123;
int a[mx];
int main()
{
    // https://codeforces.com/problemset/problem/474/B

    optimize();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<int, int>> v;
    v.push_back({1, a[0]});
    for (int i = 1; i < n; i++)
    {
        v.push_back({v[i - 1].second + 1, v[i - 1].second + a[i]});
    }

    int q;
    cin >> q;
    while (q--)
    {
        int p;
        cin >> p;
        int ans;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid].first <= p && p <= v[mid].second)
            {
                ans = mid;
                break;
            }
            if (p < v[mid].first)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}