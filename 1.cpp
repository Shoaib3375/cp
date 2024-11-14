#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>> s;
    for (int i = 0; i < (s.size()/2)-1 ; i++)
    {
        if(s[i]!=s[i+1]){
            cout << "YES"<<endl;
            return;
        }
    }
    cout << "NO\n";
    
}
int main()
{
    
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    return 0;
}