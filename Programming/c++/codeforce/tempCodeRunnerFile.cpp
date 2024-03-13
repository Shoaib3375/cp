#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

void solve()

{
    ll a, sum = 0;
    cin >> a;
    ll arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        sum += abs(arr[i]);
    }
    if (sum % 3 == 0)
    {
        cout << "0\n";
        return;
    }
    for (ll i = 0; i < a; i++)
    {
        if ((sum - arr[i] % 3 == 0))
        {
            cout << "1\n";
            return;
        }
    }
    if ((sum + 1) % 3 == 0)
    {
        cout << "1\n";
        return;
    }
    cout << "2\n";
}

int main()

{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}