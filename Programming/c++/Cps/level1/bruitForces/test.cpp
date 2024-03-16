#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const ll mx = 10e9 + 123;
char grid[101][101];

const int mex = 2e8 + 12;
bool isPerfect[mex];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        isPerfect[i * i] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int v = i * i + j * j;
            if (isPerfect[v])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
