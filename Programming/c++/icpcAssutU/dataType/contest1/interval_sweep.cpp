#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define do double
#define ch char
main(){
    ll n,m;
    cin >>n>> m; 
    if((n == 0 && m == 0) || abs(n-m)>=2){
        cout <<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}