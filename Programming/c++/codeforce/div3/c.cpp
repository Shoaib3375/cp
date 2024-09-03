#include <bits/stdc++.h>
using namespace std;

vector<int> maxLengthGoodArray(int t, vector<pair<int, int>> &testCases)
{
    vector<int> results;
    for (int i = 0; i < t; ++i)
    {
        int l = testCases[i].first;
        int r = testCases[i].second;

        int diff = r - l;
        int k = 1;
        int max_length = 0;

        while (k * (k - 1) / 2 <= diff)
        {
            max_length = k;
            k++;
        }

        results.push_back(max_length);
    }
    return results;
}

int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> testCases(t);

    for (int i = 0; i < t; ++i)
    {
        cin >> testCases[i].first >> testCases[i].second;
    }

    vector<int> results = maxLengthGoodArray(t, testCases);

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
