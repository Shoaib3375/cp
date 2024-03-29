#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string s = "";
            for (int j = 0; j < n; j++)
            {
                s += ((i + j) % 2 == 0 ? "##" : "..");
            }
            cout << s << '\n';
            cout << s << '\n';
        }
    }

    return 0;
}
