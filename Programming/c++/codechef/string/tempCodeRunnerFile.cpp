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
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 0)
            {
                if (s[i + 1] == 0)
                {
                    cout << 'A' << endl;
                }
                else
                {
                    cout << 'T' << endl;
                }
            }
            if (s[i] == 1)
            {
                if (s[i + 1] == 0)
                {
                    cout << 'C' << endl;
                }
                else
                {
                    cout << 'G' << endl;
                }
            }
        }
    }
    return 0;
}
