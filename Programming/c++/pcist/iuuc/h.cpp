#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;

    for (int cnt = 1; cnt <= t; ++cnt) {
        int k, n;
        cin >> k >> n;

        if (n <= 3) {
            cout << "Case " << cnt << ": " << (2LL * k % MOD) << endl;
            continue;
        }

        vector<long long> dp(n + 1);
        dp[1] = dp[2] = dp[3] = k;

        for (int i = 4; i <= n; ++i) {
            dp[i] = (dp[i - 1] + dp[i - 3]) % MOD;
        }

        cout << "Case " << cnt << ": " << (2LL * dp[n] % MOD) << endl;
    }

    return 0;
}
