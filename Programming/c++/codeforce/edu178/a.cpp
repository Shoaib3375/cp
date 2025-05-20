#include<bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c;
    cin>> a >> b >> c;
    if((a+b+c)%3 != 0 || b>(a+b+c)/3){
        cout << "NO" << endl;
        
    }else{
        cout << "YES" << endl;
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