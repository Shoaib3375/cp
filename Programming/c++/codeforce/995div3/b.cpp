#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while (t--)
    {
        int n,a,b,c;
        cin>> n>> a>> b>> c;
        int total = a+b+c;
        int ans = n/total*3;
        n%=total;
        if(n>0){
            n-=a;
            ans++;
        }
        if(n>0){
            n-=b;
            ans++;
        }
        if(n>0){
            n-=c;
            ans++;
        }
        cout << ans<<endl;
    }
    return 0;
}