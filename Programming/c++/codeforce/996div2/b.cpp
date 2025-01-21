#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        long long sumA = accumulate(a.begin(), a.end(), 0LL);
        long long sumB = accumulate(b.begin(), b.end(), 0LL);

        if (sumA < sumB)
        {
            cout << "NO\n";
            continue;
        }
        bool possible = true;
        for (int i = 0; i < n; ++i)
        {
            if (b[i] > a[i] + (sumA - sumB))
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}
