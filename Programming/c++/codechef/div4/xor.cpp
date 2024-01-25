#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

pair<ll, ll> find_xor_pair(ll X)
{
    ll highest_bit = log2(X) + 1;

    ll A = pow(2, highest_bit - 1);
    ll B = X ^ A;

    return make_pair(A, B);
}

main()
{
    ll T;
    cin >> T;

    while (T--)
    {
        ll X;
        cin >> X;
        pair<ll, ll> result = find_xor_pair(X);
        cout << result.second << " " << result.first << endl;
    }
}
