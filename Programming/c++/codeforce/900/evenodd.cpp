// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(){
    
//     ll n,t;
//     cin>> n>> t;
//     vector<ll> vec;
//     for (ll i = 1; i <=n; i+=2)
//     {
//         vec.push_back(i);
//     }
//     for(ll i = 2; i<=n; i+=2){
//         vec.push_back(i);
//     }
//     cout << vec[t-1]<<'\n';

// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, t;
    cin >> n >> t;
    
    ll oddCount = (n + 1) / 2; 
    if (t <= oddCount)
        cout << 2 * t - 1 << '\n'; 
    else
        cout << 2 * (t - oddCount) << '\n'; 
    return 0;
}
