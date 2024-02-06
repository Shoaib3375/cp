#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = s.size()-1; i >= 0; i--)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}