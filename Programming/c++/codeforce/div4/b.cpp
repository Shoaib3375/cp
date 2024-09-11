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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            string r;
            cin >> r;
            for (int j = 0; j < 4; j++)
            {
                if (r[j] == '#')
                {
                    v.push_back(j + 1);
                    break;
                }
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << v[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}