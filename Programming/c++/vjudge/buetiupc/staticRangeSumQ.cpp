#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "\n"
const int mx = 2e5 + 123;
int a[mx];
ll preSum[mx];
 
int main()
{
 
    int n, q;
    cin >> n >> q;
 
    for (int i = 1; i <= n; i++)
        cin >> a[i];
 
    for (int i = 1; i <= n; i++)
    {
        preSum[i] = preSum[i - 1] + a[i];
        
    }
 
    while (q--)
    {
        int l, r;
        cin >> l >> r;
 
        cout << (preSum[r] - preSum[l - 1]) << endl;
    }
 
    return 0;
}