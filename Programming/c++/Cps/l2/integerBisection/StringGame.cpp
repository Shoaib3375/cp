#include <bits/stdc++.h>
using namespace std;
const int mx = 2e5 + 123;
#define mem(a, b) memset(a, b, sizeof(a))

string s, t;
int n, m;
bool removed[mx];
int a[mx];

bool check(int val)
{
    mem(removed, 0);

    for (int i = 1; i <= val; i++)
        removed[a[i] - 1] = 1;

    for (int i = 0, j = 0; i < n; i++)
    {
        if (removed[i])
            continue;
        if (s[i] == t[j])
        {
            j++;
            if (j == m)
                return true;
        }
    }

    return false;
}

int main()
{

    cin >> s >> t;
    n = s.size();
    m = t.size();

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int l = 0, r = n;
    int ans;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}
