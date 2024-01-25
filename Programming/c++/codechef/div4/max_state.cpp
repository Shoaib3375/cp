#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll maxs = 0;
        ll cst = 0;

        for (int i = 0; i < n; i++)
        {
            cst += a[i];
            if (cst >= m)
            {
                maxs++;
                cst = 0;
            }
        }
        cout << maxs<<endl;
    }

}
