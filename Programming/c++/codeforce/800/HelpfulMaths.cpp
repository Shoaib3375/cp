#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            a[cnt++] = s[i] - '0';
        }
    }
    sort(a, a + cnt);
    for (int i = 0; i < cnt; i++)
    {
        cout << a[i];
        if (i == cnt - 1)
        {
            break;
        }
        cout << "+";
    }
    return 0;
}