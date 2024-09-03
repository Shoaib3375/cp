#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(ll n, string s)
{

    ll o = 0;
    ll z = 0;
    for (auto x : s)
    {
        if (x == '0')
            z++;
        else
            o++;
    }
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            int r = i;
            int c = n / i;
            if (o == 2 * (r + c - 2) && z == (r * c - o))
            {
                if (r == c)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        string s;
        cin >> a >> s;
        solve(a, s);
    }
}
