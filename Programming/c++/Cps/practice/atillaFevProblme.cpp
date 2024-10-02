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
        vector<char> st(n); 
        for (int i = 0; i < n; i++)
        {
            cin >> st[i];
        }

        int mn = 0; 
        for (auto i : st)
        {
            int ca = (int)i - 'a' + 1; 
            mn = max(ca, mn); 
        }
        cout << mn << endl;
    }
}
