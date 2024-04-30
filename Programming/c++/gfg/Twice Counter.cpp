#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);



int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        map<string, int> cnt;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            cnt[s]++;
        }
        int ans = 0;
        for (auto u : cnt)
        {
            if(u.second == 2) cout << "Case: "<< u.first << endl;
        }
        
        
    }
    
}