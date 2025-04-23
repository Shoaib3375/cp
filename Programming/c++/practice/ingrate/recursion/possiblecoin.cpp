#include <bits/stdc++.h>
using namespace std;

vector<int> coins = {5, 12, 23};
int dp[1000005];

int isPossible(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    if (dp[n] != -1) return dp[n];

    for (auto coin : coins) {
        if (isPossible(n - coin)) 
            return dp[n] = 1;  
    }
    return dp[n] = 0;
}

int main() {
    memset(dp, -1, sizeof(dp)); 
    int n;
    cin >> n;
    cout << isPossible(n) << endl;
}
