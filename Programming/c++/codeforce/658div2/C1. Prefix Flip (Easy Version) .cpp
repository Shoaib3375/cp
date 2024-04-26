#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        string a, b;
        vector<ll> ans;
        cin >> a >> b;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                if (a[0] == b[i])
                {
                    ans.pb(1LL);
                    if (a[0] == '0')
                        a[0] = '1';
                    else
                        a[0] = '0';
                }
                string x;
                ans.pb(i + 1);
                for (ll j = i; j >= 0; j--)
                {
                    if (a[j] == '0')
                        x += '1';
                    else
                        x += '0';
                }
                for (ll j = i + 1; j < n; j++)
                {
                    x += a[j];
                }
                a = x;
            }
            // cout<<i<<endl<<a<<endl<<b<<endl;
        }
        cout << ans.size();
        for (ll i = 0; i < ans.size(); i++)
            cout << " " << ans[i];
        cout << endl;
    }

    return 0;
}