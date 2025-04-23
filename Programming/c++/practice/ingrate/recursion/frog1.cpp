#include <bits/stdc++.h>
using namespace std;

int n, h[100005], vis[100005], dp[100005];

int solve(int i){
	if(i==n) return 0;
	if(vis[i]) return dp[i];
	int res=INT_MAX;
	
	//i -> i+1
	int cost=abs(h[i]-h[i+1]);
	int now=cost+solve(i+1);
	
	res=min(res,now);
	
	if(i+2<=n){
		//i -> i+2
	
		cost=abs(h[i]-h[i+2]);
		now=cost+solve(i+2);
		
		res=min(res,now);
	}
	
	vis[i]=1;
	dp[i]=res;
	return res;
}

int main() {
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>h[i];
	}
	int ans=solve(1);
	cout<<ans<<'\n';
	return 0;
}