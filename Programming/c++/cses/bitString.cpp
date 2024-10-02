#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    ll mod =  1e9+7;
    cin>> n;
    ll ass = 1;
    for (int i = 0; i < n; i++)
    {
        ass = ass * 2;
        ass = ass%mod;
    }
    cout << ass<<endl;
    return 0;
}