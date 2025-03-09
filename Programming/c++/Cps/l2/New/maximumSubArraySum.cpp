#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long int> &nums)
{
    long long mx = nums[0];
    
    
    for (size_t i = 1; i < nums.size(); i++)
    {
        nums[i] = max(nums[i], nums[i] + nums[i - 1]);
        mx = max(mx, nums[i]);
    }
    return mx;
}
int main()
{
    long long int n;
    cin >> n;
    vector<long long int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    long long res = solve(vec);
    cout << res << '\n';
}