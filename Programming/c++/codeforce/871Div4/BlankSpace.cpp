#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ll Mod = 998244353;
const ll INF = 0x3f3f3f3f;
void solve()
{
    int n,ans=0,count=0;
    cin>>n;
    for(int i=0,x;i<n;i++)
    {
        cin>>x;
        if(x==0)
        {
            count++;
        }
        else
        {
            ans=max(ans,count);
            count=0;
        }
    }
    cout<<max(ans,count)<<endl;
}
int main(){
    long long t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
