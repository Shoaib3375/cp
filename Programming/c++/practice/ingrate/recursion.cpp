#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll a,ll b){
    if(b==0) return 1;
    if(b%2==0){
        ll x = power(a,b/2);
        return x*x;
    }else{
        return power(a,b-1) * a;
        
    }
}
int main(){
    ll a,b;
    cin>> a>> b;
    cout << power(a,b)<<endl;
}