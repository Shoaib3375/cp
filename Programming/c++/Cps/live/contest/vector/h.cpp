#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int>& memo) {
    if (n <= 1) 
        return n;

    if (memo[n] != -1) 
        return memo[n];
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}

int main() {
    int n;
    
    cin >> n;

    
    vector<int> memo(n + 1, -1);

    
    for (int i = 0; i < n; i++) {
        cout << fib(i, memo) << " ";
    }
    cout << endl;

    return 0;
}
