#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;

        vector<ll> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        vector<ll> Sum(N + 1);
        Sum[0] = 0;
        for (int i = 1; i <= N; i++)
            Sum[i] += Sum[i - 1] + arr[i - 1];
        int q;
        cin >> q;
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll ans = Sum[r] - Sum[l - 1];
            cout << ans << "\n";
        }
    }
}

/*
10 20 30 40

10 30 60 100
0 10 30 60 100
sum[0]=0;
sum[i]=
*/