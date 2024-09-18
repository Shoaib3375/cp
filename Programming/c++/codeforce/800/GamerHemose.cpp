#include <bits/stdc++.h>

using namespace std;
long long t, n, h;
vector<long long> sz;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> h;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            sz.push_back(x);
        }
        sort(sz.rbegin(), sz.rend());
        long long s = sz[0] + sz[1];
        if (sz[0] >= h)
        {
            cout << 1 << "\n";
        }
        else
        {
            // Calculate first case: using both largest capacities together
            long long rounds_with_two_largest = (h + s - 1) / s;         // Number of rounds required (ceiling division)
            long long total_actions_case1 = rounds_with_two_largest * 2; // Multiply by 2 because each round is 2 actions

            // Calculate second case: using the largest capacity first, then pairs of the two largest
            long long remaining_after_largest = h - sz[0];                       // Remaining amount after using largest capacity once
            long long rounds_with_pairs = (remaining_after_largest + s - 1) / s; // Number of rounds required for the rest (ceiling division)
            long long total_actions_case2 = rounds_with_pairs * 2 + 1;           // +1 for the first action using the largest capacity alone

            // Get the minimum of the two cases
            long long result = min(total_actions_case1, total_actions_case2);

            // Output the result
            cout << result << "\n";
        }
        sz.clear();
    }
    return 0;
}