#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    vector<int> v;
    for (int i = 0; m; i++)
    {
        while (m % 3 != 0)
        {
            m--;
            v.push_back(i);
        }
        m /= 3;
    }
    cout << v.size() << '\n';
    for (auto &&i : v)
    {
        cout << i << ' ';
    }
    cout << '\n';
}