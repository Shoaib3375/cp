#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const int mx = 10e5 + 123;
char s[mx];
char grid[101][101];
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int rowin, colin;
    cin >> rowin >> colin;
    if (grid[rowin - 1][colin - 1] != '.' && grid[rowin - 1][colin] != '.' && grid[rowin - 1][colin + 1] != '.' &&
        grid[rowin][colin - 1] != '.' && grid[rowin][colin + 1] != '.' &&
        grid[rowin + 1][colin - 1] != '.' && grid[rowin + 1][colin] != '.' && grid[rowin + 1][colin + 1] != '.')
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }
    return 0;
}
