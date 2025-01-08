#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        v.erase(unique(v.begin(), v.end()), v.end());
        sort(v.begin(), v.end());

        int last = v[v.size() - 1];
        int slast = v[v.size() - 2];
        int sum = last + slast;
        cout << sum << endl;
    }
    return 0;
}
