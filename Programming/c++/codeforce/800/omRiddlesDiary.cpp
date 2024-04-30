#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, bool> vis;
    while (n--)
    {
        string s;
        cin >> s;
        if(vis[s]==1) cout << "YES"<<endl;
        else cout << "NO"<<endl;
        vis[s] = 1;
    }

}