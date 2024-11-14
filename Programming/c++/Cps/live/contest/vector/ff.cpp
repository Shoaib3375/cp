// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_D

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin>>n>>q;
	vector<int>v[n];
	
	for(int i=0; i<q; i++){
		int tp;
		cin>>tp;
		if(tp==0){
			int t, x;
			cin>>t>>x;
			v[t].push_back(x);
		}
		else if(tp==1){
			int t;
			cin>>t;
			for(int j=0; j<v[t].size(); j++){
				cout<<v[t][j];
				if(j!=v[t].size()-1) cout<<" ";
			}
			cout<<'\n';
		}
		else{
			int t;
			cin>>t;
			v[t].clear();
		}
	}
	
	return 0;
}