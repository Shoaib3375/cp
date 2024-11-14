#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int n = x.size();
        for (int i = 1; i < n; i += 2)
        {
            if (x[i] == 'z')
                x[i] = 'y';
            else
                x[i] = 'z';
        }
        for (int i = 0; i < n; i += 2)
        {
            if (x[i] == 'a')
                x[i] = 'b';
            else
                x[i] = 'a';
        }
        cout << x << "\n";
    }
}