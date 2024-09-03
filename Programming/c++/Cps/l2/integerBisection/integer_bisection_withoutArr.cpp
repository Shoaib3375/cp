#include <bits/stdc++.h>
using namespace std;
int arr[22];
int solve(int x)
{
    return (3 * x * x) + (2 * x) + 4;
}
int main()
{
    int k = 80;

    int l = 0, r = 10;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (solve(mid) >= k)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}