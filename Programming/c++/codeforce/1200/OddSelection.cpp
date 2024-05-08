#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll odd = 0, even = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            if (p % 2)
                odd++;
            else
                even++;
        }

        if (!odd)
            cout << "No" << endl;
        else
        {
            k--;
            odd--;
            while (k > 0)
            {
                if (odd >= 2 && k >= 2)
                    odd -= 2, k -= 2;
                else if (even)
                    even--, k--;
                else
                    break;
            }

            if (k)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }

    return 0;
}