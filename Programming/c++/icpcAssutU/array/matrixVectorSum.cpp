#include <bits/stdc++.h>
using namespace std;
const int mx = 123;
int a[mx][mx];
int b[mx];
int c[mx];
int main()
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
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += (a[i][j] * b[j]);
        }
        c[i] = sum;
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i]<<endl;
    }
    return 0;
}