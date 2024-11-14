#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n = 8;
    vector<string> str;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {

        int cnt = 0, pnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (str[j][i] == 'B')
            {
                cnt++;
            }
            if (str[i][j] == 'R')
                pnt++;
        }
        if (cnt == n)
        {
            cout << "B" << endl;
            return 0;
        }
        if (pnt == n)
        {
            cout << "R" << endl;
            return 0;
        }
    }

    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}