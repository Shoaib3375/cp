#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (size_t i = 1; i <= t; i++)
    {

        int n, r;
        cin >> n >> r;
        map<pair<int, int>, bool> vis;
        bool done = 1;
        while (r--)
        {
            int i, id;
            cin >> i >> id;
            if (vis[{i, id}])
                done = 0;
            vis[{i, id}] = 1;
        }
        if (done == 1)
            cout << "Scenario #" << i << ": possible" << endl;
        else
            cout << "Scenario #" << i << ": impossible" << endl;
    }
}