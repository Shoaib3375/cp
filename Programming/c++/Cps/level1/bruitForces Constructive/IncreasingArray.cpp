#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define d double
int cnt[30];
const ll mx = 2e5 + 123;
char grid[101][101];
int x[123], y[123];
ll a[mx];
int main()
{
    ll n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i]<a[i-1])
        {
            cnt += (a[i-1]-a[i]);
            a[i] = a[i-1];
        }    
    }
    cout << cnt<<endl;
    return 0;
}