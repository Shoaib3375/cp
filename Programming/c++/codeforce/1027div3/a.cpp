#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int year = stoi(s);

    int rt = (int)sqrt(year);
    bool f = false;

    for (int x = max(0, rt - 100); x <= rt + 100; ++x)
    {
        if (x * x == year)
        {
            int a = x / 100;
            int b = x % 100;

            if ((a + b) * (a + b) == year)
            {
                cout << a << " " << b << endl;
                f = true;
                break;
            }
        }
    }

    if (!f)
        cout << -1 << endl;
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
