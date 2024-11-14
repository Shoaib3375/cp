#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!=s[i]){
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