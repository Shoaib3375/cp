#include <bits/stdc++.h>
using namespace std;


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
    
    cout << v.size() << endl;
}