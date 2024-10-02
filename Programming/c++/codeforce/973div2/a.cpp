#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, x, y;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        if (n % min(x, y))
            cout << n / min(x, y) + 1 << endl;
        else
            cout << n / min(x, y) << endl;
    }
    return 0;
}