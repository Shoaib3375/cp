#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double


int main()
{
    int t;
    ll a, b, res;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        res = __gcd(a, b);
        if (res == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
