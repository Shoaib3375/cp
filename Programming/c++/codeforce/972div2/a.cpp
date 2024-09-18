#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        string v = "aeiou";
        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < n / 5 + (i < n % 5); ++j)
                s += v[i];
        cout << s << '\n';
    }
}