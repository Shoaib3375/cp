#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const int mx = 1023;
char s[mx],tmp[mx];
int main()
{
    
    scanf("%s",s);
    int len = 0;
    while (s[len] != 0)
    {
        tmp[len] = s[len];
        len++;
    }
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        char tmpchar = tmp[i];
        tmp[i] = tmp[j];
        tmp[j] = tmpchar;
    }
    bool isEqual = true;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != tmp[i])
        {
            isEqual = false;
            break;
        }
    }
    if (isEqual)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}