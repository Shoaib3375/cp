#include <bits/stdc++.h>
using namespace std;
long long solve(long long n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }

    vector<int> dp(n + 1);
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    cout << (long long)solve(n) << '\n';
}