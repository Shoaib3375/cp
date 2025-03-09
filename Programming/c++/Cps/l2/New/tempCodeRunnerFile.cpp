#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    int mx = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] = max(nums[i], nums[i] + nums[i - 1]);
        mx = max(mx, nums[i]);
    }
    return mx;
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int res = solve(vec);
    cout << res << '\n';
}