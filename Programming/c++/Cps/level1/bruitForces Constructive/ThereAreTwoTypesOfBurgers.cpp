#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll b, p, f;
        cin >> b >> p >> f;
        ll h, c;
        cin >> h >> c;
        ll num = b / 2;
        ll price = 0;
        if (h >= c)
        {
            price += min(num, p) * h;
            num -= min(num, p);
            price += min(num, f) * c;
        }
        else
        {
            price += min(num, f) * c;
            num -= min(num, f);
            price += min(num, p) * h;
        }
        cout << price << "\n";

        
    }
    return 0;
}
