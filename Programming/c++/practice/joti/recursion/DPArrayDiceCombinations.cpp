#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000;
const int MOD = 1e9 + 7;

long long dp[MAX_N + 1];

long long solve(int sum)
{
    if (sum == 0)
        return 1;
    if (sum < 0)
        return 0;
    if (dp[sum] != -1)
        return dp[sum];

    long long res = 0;
    for (int j = 1; j <= 6; j++)
    {
        res = (res + solve(sum - j)) % MOD;
    }

    return dp[sum] = res;
}

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));

    cout << solve(n) << endl;

    return 0;
}
