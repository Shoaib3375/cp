#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        char c;
        cin >> h >> c >> m;
        string s = " AM";

        if (h >= 12)
        {
            h -= 12;
            s = " PM";
        }

        if (h == 0)
        {
            h = 12;
        }

        if (h < 10)
        {
            cout << "0";
        }
        cout << h << ":";

        if (m < 10)
        {
            cout << "0";
        }
        cout << m << s << '\n';
    }
    return 0;
}
