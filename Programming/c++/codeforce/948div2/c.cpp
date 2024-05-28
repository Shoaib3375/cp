#include <bits/stdc++.h>

using namespace std;

void optimize()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int lcm(int x, int y)
{
    if (x == 0 || y == 0)
    {
        return 0;
    }
    return x * (y / gcd(x, y));
}

int lcm_multiple(const vector<int> &numbers)
{
    return accumulate(numbers.begin(), numbers.end(), 1,
                      [](int a, int b)
                      { return lcm(a, b); });
}

int main()
{
    optimize();

    int t;
    cin >> t;

    vector<int> results;

    for (int test_case = 0; test_case < t; ++test_case)
    {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            results.push_back(0);
            continue;
        }

        set<int> a_set(a.begin(), a.end());

        int max_len = 0;

        for (int it = 1; it < (1 << n); ++it)
        {

            vector<int> subsequence;

            for (int i = 0; i < n; ++i)
            {
                if (it & (1 << i))
                { //
                    subsequence.push_back(a[i]);
                }
            }

            int subseq_lcm = lcm_multiple(subsequence);

            if (a_set.find(subseq_lcm) == a_set.end())
            {

                max_len = max(max_len, static_cast<int>(subsequence.size()));
            }
        }

        results.push_back(max_len);
    }

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
