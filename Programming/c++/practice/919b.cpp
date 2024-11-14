#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mx = 1e4+123;
int a[mx];
int main()
{

    ll i, j, k = 1,n,p,q;
    for (i = 1; k <= 10000; i++)
    {
        p = 0, q = i;
        while (q)
        {
            p += q % 10;
            q /= 10;
        }
        if (p == 10)
            a[k++] = i;
    }
    cin >> n;
    cout << a[n] << '\n';
    return 0;
}