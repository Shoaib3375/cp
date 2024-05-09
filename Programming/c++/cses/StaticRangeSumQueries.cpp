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
            // 8 4
            // 3 2 4 5  1  1  5  3
            // 1 2 3 4  5  6  7  8
            // 3 5 9 14 15 16 21 24
            // 2 4
            // 5 6
            // 1 8
            // 3 3
        cout << (preSum[r] - preSum[l - 1]) << endl; // l-1 cause left value use before value sum
    }

    return 0;
}
