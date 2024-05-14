#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const int mx = 10e5 + 123;
char s[mx];
int main()
{
    int l, r;
    cin >> l >> r>>s;
    int len = 0;
    while (s[len] != 0)
    {
        len++;
    }
    for (int i = l - 1, j = r - 1; i < j; i++, j--)
    {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
    cout << s<<endl;
    return 0;
}
