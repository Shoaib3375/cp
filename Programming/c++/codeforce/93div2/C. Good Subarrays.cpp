#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
	
	ll t;
	cin>>t;

	while(t--){
		string s;
		ll n;
		cin>>n;
		cin>>s;

		map<ll,ll> x;
		x[0]=1;
		ll ans=0;

		for(ll i=0,sum=0;i<n;i++){
			sum+=(s[i]-'0'-1);
			ans+=x[sum];
			x[sum]++;
		}

		cout<<ans<<endl;
	}
 
	return 0;
}