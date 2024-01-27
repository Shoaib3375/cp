#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

void solve()
{
    ll n, k, m;
    string s;
    cin >> n >> k >> m;
    cin >> s;
    unordered_map<char, ll> mp;
    string str = "";
    for (int i = 0; i <m;  i++)
    {
        mp[str[i]]++;
        if (mp[str[i]] == n)
        {
            char ch = 'a';
            
            ;
            for (int j = 0; j  < k; j++)
            {
                if (mp[ch] n - 1)
                {
                    ans += ch;
                }
                ch++;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
