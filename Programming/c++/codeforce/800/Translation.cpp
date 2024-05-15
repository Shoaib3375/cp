#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,c;
    cin >> s>>c;
    reverse(s.begin(), s.end());
    if (s == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}