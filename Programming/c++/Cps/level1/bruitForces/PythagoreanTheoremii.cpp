#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const ll mx = 10e9 + 123;

char grid[101][101];
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int c = sqrt(i * i + j * j);
            if (c <= n && c * c == i * i + j * j)
            {
                count++;
            }
        }
    }
    cout << count << endl;

    cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

    return 0;
}

/*
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
    for (int c = 0; c <= n; c++)
    {
        isPerfect[c * c] = true;
        // 1,4,9,16,25,36,
        // 9,16,25
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int c = i * i + j * j;
            if (isPerfect[c])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
 */