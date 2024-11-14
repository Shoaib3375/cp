#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>> n;
    int sum = 0;
    for (int i = 1; i <=n; i++)
    {
        int a;
        cin>> a;
        sum += a;

    }
    cout << sum<<endl;
    
}
int main(){
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    
    
}