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
        vector<int> v(n + 1);
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            v[a]++;
        }
        int out = -1;
        for (int j = 1; j <= n; j++)
            if (v[j] > 2)
                out = j;
        cout << out << endl;
    }
    return 0;
}