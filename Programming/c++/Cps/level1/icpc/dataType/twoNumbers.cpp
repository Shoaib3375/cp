#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main(){
    ll a,b;
    cin >> a>> b;
    d flor = floor(a*1.0 /b);
    d cil = ceil(a*1.0 /b );
    d rnd = round(a*1.0 /b);
    cout << "floor "<< a <<" / " <<b <<" = "<< flor<<endl;
    cout << "ceil "<< a <<" / " <<b <<" = "<< cil<<endl;
    cout << "round "<< a <<" / " <<b <<" = "<< rnd<<endl;

}
