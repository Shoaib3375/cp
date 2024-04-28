#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        vector<int> card(n);
        for (int i = 0; i < n; i++)
        {
            cin>> card[i];
        }
        vector<int> cnt(101,0);
        for(auto u:card){
            cnt[u]++;
        }
        int maxE = 0;
        for (int i = 1; i <=100; i++)
        {
            if(cnt[i]>0){
                int ex = cnt[i]/(k-1);
                maxE = max(maxE,ex);
            }
        }
        
        
        
    }
    
}