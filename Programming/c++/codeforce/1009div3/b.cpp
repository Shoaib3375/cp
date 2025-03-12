#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>> vec[i];
    }
    int sm = vec[0];
    for (int i = 1; i < n; i++)
    {
        sm += vec[i] -1;
    }
    cout << sm<<'\n';
    
    
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