#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, q;
	cin>>n>>q;
	stack<int>st[n];
	for(int j=0; j<q; j++){
		int tp;
		cin>>tp;
		if(tp==0){
			int t, x;
			cin>>t>>x;
			st[t].push(x);
		}
		else if(tp==1){
			int t;
			cin>>t;
			if(st[t].empty()){
				
			}
			else{
				cout<<st[t].top()<<endl;
			}
		}
		else{
			int t;
			cin>>t;
			if(st[t].empty()==0) st[t].pop();
		}
	}
	return 0;
}