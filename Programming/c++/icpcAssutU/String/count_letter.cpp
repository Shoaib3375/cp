#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
int main()
{
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != 0)
    {
        int index = s[i] - 'a';
        cnt[index]++;
        i++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        {
            char c = 'a' + i;
            cout << c << " : " << cnt[i] << endl;
        }
    }
}