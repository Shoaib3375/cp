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
    string s;
    cin >> s;
    char tmp = s[0];
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        int t = s[i] - '0';
        int revDig = 9 - t;
        if (revDig < t)
        {
            s[i] = revDig + '0';
        }
    }
    if (s[0] == '0')
    {
        s[0] = tmp;
    }
    for (int i = 0; i < len; i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}