#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>> v[i].first>>v[i].second;
        // v[i].first * -1;
    }
    int ans = 0;
    for (auto i : v)
    {
        cout << i.first<<' '<<i.second<<endl;
    }
    
    for (auto i : v)
    {
        if(i == v[k-1]){
            ans++;
        }
    }
    cout << ans<<endl;
    
    
}