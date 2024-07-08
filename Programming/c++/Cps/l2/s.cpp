#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, x, i;
    int dp[10001];
    int n, cases;
    cin >> cases;
    for (int t = 1; t <= cases; t++) {
        cin >> a >> b >> c >> d >> e >> f >> n;
        dp[0] = a % 10000007;
        dp[1] = b % 10000007;
        dp[2] = c % 10000007;
        dp[3] = d % 10000007;
        dp[4] = e % 10000007;
        dp[5] = f % 10000007;
        x = dp[0] + dp[1] + dp[2] + dp[3] + dp[4] + dp[5];
        for (i = 6; i <= n; i++) {
            x = x + dp[i - 1];
            dp[i] = x % 10000007;
            x = x - dp[i - 6];
        }
        cout << "Case " << t << ": " << dp[n] << endl;
    }
    return 0;
}
