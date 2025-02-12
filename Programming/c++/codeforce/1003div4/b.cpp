#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << 1 << '\n';
            return ;
        }
    }
    cout << s.size() << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}