#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>> v[i];
    }
    vector<int> vc = v;
    sort(v.begin(),v.end());
    
    
    
    for (int i = 0; i < n; i++)
    {
        if(vc[i]==v[n-1]){
            cout << vc[i] - v[n-2]<<" ";
        }else{
            cout << vc[i] - v[n-1]<<" ";
        }
    }
    cout << endl;
    
    
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