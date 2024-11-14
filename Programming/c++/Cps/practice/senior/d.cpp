#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>> t;
    while (t--)
    {
        ll x,y;
        cin>> x>> y;
        ll dif = x-y;
        if(dif>1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
    
}