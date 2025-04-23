#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
vector<int> coins;
vector<int> dp;

int minCoins(int x) {
    if (x < 0) return INF;   // Impossible case
    if (x == 0) return 0;    // Base case: 0 coins needed for sum 0
    if (dp[x] != -1) return dp[x];  // Return precomputed value

    int res = INF;
    for (int coin : coins) {
        res = min(res, minCoins(x - coin)+1 );
    }
    
    return dp[x] = res;
}

int main() {
    int n, x;
    cin >> n >> x;
    
    coins.resize(n);
    dp.assign(x + 1, -1);  // Initialize DP array with -1
    
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int result = minCoins(x);
    cout << (result == INF ? -1 : result) << endl;
    
    return 0;
}
