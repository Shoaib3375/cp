#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mx = 1e7+123;
int arr[mx];
int main(){
    int lim = 1e7;
    for (int i = 1; i <=lim; i++)
    {
        for (int j = i; j <= lim; j += i)
        {
            arr[j]++;
        }
    }
    int n;
    cin>> n;
    ll ans = 0;
    for (int i = 1; i <=n; i++)
    {
        ans += (1LL * i * arr[i]);
    }
    cout << ans << endl;
    

}