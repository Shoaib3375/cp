#include <bits/stdc++.h>
using namespace std;
double memo[1000001];
int main()
{
    memo[0] = 0; 
    for(int i=1;i<=1000000;i++){
      memo[i] = memo[i-1] + log(i);
    }

    int t, base;
    long long int digits,n;

    cin >> t;

    for(int i = 1; i<= t; i++){
        cin >> n >> base;
        digits = memo[n]/log(base) + 1;
        cout << "Case " << i << ": " << digits << "\n";
    }

    return 0;
}