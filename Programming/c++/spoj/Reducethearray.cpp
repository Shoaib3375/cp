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
        priority_queue<ll> q;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            q.push(-a);
        }

        ll ans = 0;
        while (q.size() > 1)
        {
            ll a = -q.top();
            q.pop();

            ll b = -q.top();
            q.pop();

            q.push(-(a + b));
            ans += (a + b);
        }

        cout << ans << endl;
    }

    return 0;
}