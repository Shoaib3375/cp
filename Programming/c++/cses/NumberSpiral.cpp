#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll x,y;
    cin>> x>> y;
    ll mx = max(x,y);
    ll mn = min(x,y);
    // x = 2;
    // y = 3;  
    if(x==y){
        cout << mx * mx - ( mx-1)<<'\n';
    }
    else{
        ll mins = mx * mx -(mx-1);
        if(x>y){
            if(x%2){
                mins -= (x-y);
            }else{
                mins += (x-y);
            }
        }else if(x<y){
            if(y%2){
                mins += (y-x);
            }else{
                mins -= (y-x);
            }
        }
        cout << mins<<'\n';
    }
    
}
int main(){
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    return 0;
}