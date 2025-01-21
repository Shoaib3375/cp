#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    int t;
    cin >> t;
    set<pair<string, string>> v;
    for (int i = 0; i < t; i++)
    {
        string s,q;
        cin>> s>> q;
        v.insert({s,q});
    }
    for (auto i : v)
    {
        cout << i.second<<endl;
    }
    
    
    cout << v.size() << endl;
}