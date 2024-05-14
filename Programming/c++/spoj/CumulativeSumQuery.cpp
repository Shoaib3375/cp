#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int mx = 2e5 + 123;
int a[mx];
ll preSum[mx];

int main()
{
    int n;
    cin >> n;
    // for (int i = 0; i <n; i++)
    for (int i = 1; i <=n; i++)
    {
        cin >> a[i];
        preSum[i] = preSum[i - 1] + a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l++,r++;// when it's not zero based index.
        cout << (preSum[r] - preSum[l - 1]) << endl;
    }
    
}
