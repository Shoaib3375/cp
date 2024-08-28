#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    vector<ll> v;
    ll a;
    while (scanf("%lld", &a)!= '\n')
    {
        v.push_back(a);
    }
    for (int i = v.size()-1; i >= 0; i--)
    {
        printf("%.4llf\n",sqrt(v[i]));
    }
    return 0;
    
}