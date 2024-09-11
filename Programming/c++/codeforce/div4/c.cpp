#include <bits/stdc++.h>
using namespace std;

vector<int> solve(const vector<tuple<int, int, int>> &test_cases)
{
    vector<int> results;
    for (const auto &test_case : test_cases)
    {
        int x, y, k;
        tie(x, y, k) = test_case;

        int current_x = 0, current_y = 0;
        int cnt = 0;

        while (current_x < x || current_y < y)
        {
            cnt++;
            if (cnt % 2 == 1)
            {

                current_x += k;
            }
            else
            {
               
                current_y += k;
            }
        }

        results.push_back(cnt);
    }
    return results;
}

int main()
{
    int t;
    cin >> t;
    vector<tuple<int, int, int>> test_cases(t);

    for (int i = 0; i < t; ++i)
    {
        int x, y, k;
        cin >> x >> y >> k;
        test_cases[i] = make_tuple(x, y, k);
    }

    vector<int> results = solve(test_cases);
    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
