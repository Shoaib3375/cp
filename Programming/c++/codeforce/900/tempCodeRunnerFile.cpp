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
    vector<pair<string, string>> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    int sq = unique(v.begin(),v.end())-v.begin();
    for (int i = 0; i < sq; i++)
    {
        cout << sq<<endl;
    }
    
    
}