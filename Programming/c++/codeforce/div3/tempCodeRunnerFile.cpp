#include <bits/stdc++.h>

using namespace std;

void solve(int a, int b)
{

    if (a % 2 != 0)
        cout << "NO" << endl;
    else
    {
        if (a != 0)
            cout << "YES" << endl;
        else
        {
            if (b % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        solve(a, b);
    }
}
