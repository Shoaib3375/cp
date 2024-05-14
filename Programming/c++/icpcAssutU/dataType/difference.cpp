#include<bits/stdc++.h>
using namespace std;
#define ll long long

main(){
    ll a,b,c,d;
    cin >> a>>b >> c>> d;
    ll Sab = a*b;
    ll Scd = c*d;
    ll x = Sab - Scd;
    cout<<"Difference = "<<x<<endl;
}