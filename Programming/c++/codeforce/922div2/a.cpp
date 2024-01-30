#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

int main() {
    int t;
    cin >> t;

    while(t--){
        ll n, m;
        cin >> n >> m;

        ll ans;
        if (m % 2 == 0) {
            ans = m / 2;
        } else {
            ans = (m - 1) / 2;
        }

        cout << ans * n << endl;
    }

    return 0;
}
