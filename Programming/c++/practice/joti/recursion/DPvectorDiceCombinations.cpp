#include <bits/stdc++.h>
using namespace std;

int solve(int sum, vector<int> &dp)
{
    if (sum == 0)
        return 1;
    if (dp[sum] != -1)
        return dp[sum];

    int res = 0;
    for (int j = 1; j <= 6; j++)
    {
        res += solve(sum - j, dp);
    }

    return dp[sum] = res;
}

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1, -1);
    cout << solve(n, dp) << endl;

    return 0;
}
