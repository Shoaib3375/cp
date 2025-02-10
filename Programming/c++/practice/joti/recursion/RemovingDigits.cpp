#include<bits/stdc++.h>
using namespace std;
const int ms = 1000000+7;
int dp[ms];
int solve(int n){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1) return dp[n];
    int res = INT_MAX;
    int n2 = n;
    while (n2>0)
    {
        int digit = n2%10;
        if(digit!=0){
            res = min(res,1+solve(n-digit));
        }
        n2/=10;
    }
    return dp[n] = res;
    
}
int main(){
    int n;

    cin>> n;
    memset(dp,-1,sizeof(dp));
    cout << solve(n)<<endl;
    
}