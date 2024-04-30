#include <bits/stdc++.h>

using namespace std;

string solve(int t, pair<int, string> test_cases[])
{
    string results = "";
    for (int i = 0; i < t; i++)
    {
        int n = test_cases[i].first;
        string coins = test_cases[i].second;

        int facing_up_count = 0;
        for (char c : coins)
        {
            if (c == 'U')
            {
                facing_up_count++;
            }
        }

        if (facing_up_count % 2 == 1)
        {
            results += "YES\n";
        }
        else
        {
            results += "NO\n";
        }
    }
    return results;
}

int main()
{
    int t;
    cin >> t;

    pair<int, string> test_cases[t];
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string coins;
        cin >> coins;
        test_cases[i] = make_pair(n, coins);
    }
    string results = solve(t, test_cases);

    cout << results;

    return 0;
}
