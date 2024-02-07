#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int main(){
    // ios.based::sync_with_stdio(0);
    // cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <=n; ++i)
    {
        cin>>a[i];
    } 
    int q; cin >> q;
    while(q--){
        int l,r;
        cin >> l>> r;
        int sum = 0;
        for (int i = l; i <= r; ++i)
        {
            sum += a[i];
        }
        cout<< sum<<endl;
    }
    return 0;
}