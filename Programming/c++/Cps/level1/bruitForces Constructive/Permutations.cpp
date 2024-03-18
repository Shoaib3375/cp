#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const ll mx = 10e9 + 123;
char grid[101][101];
int x[123], y[123];
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    }

    return 0;
}
