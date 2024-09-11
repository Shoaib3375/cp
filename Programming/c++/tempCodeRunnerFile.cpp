#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
    int lim = 1e4;
    for (int i = 0; i < lim; i++)
    {
        v.push_back(i * i * i);
    }
    int t;
    cin >> t;
    int ans = 0;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < lim; i++)
        {
            if (binary_search(v.begin(), v.end(), n - i * i * i))
            {
                ans = 1;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }
    return 0;
}