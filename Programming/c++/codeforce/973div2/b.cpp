#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n+10];
        for (int i = 0; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n - 2; i++)
        {
            arr[n - 1] -= arr[i];
        }
        cout << arr[n] - arr[n - 1] << endl;
    }
}