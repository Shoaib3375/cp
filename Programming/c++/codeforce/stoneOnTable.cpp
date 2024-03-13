#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r = 0;
    int g = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            if (s[i] == 'R')
                ++r;
            else if (s[i] == 'G')
            {
                ++g;
            }
            else if (s[i] == 'B')
                ++b;
    }
    cout << r + g + b;
    return 0;
}