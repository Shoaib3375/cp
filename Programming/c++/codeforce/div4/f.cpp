#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main()
{
    int t;
    cin>>t;
   
    while(t--)
    {
       int x,y,k;
       cin>>x>>y>>k;
       
       int h;
       int f;
       
       if(x%k==0)
       {
           h=x/k;
       }
       else
       {
           h=(x/k)+1;
       }
       
       if(y%k==0)
       {
           f=y/k;
       }
       else
       {
           f=(y/k)+1;
       }
       

       
       int minimum=min(h,f);
       
       int maximum=max(h,f);
       int ans=minimum+maximum+(maximum-minimum);
       
       if(h>f)
       {
           ans--;
       }
       
       cout<<ans<<endl;
       
    }
   
   
    return 0;
}
