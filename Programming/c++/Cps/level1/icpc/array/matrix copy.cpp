#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
const int mx = 123;
int a[mx][mx];
main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;
    bool isExists = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                isExists = true;
                break;
            }
        }
        if (isExists)
        {
            break;
        }
    }
    if (isExists) cout << "Will not take number";
    else cout << "will take number";
}