#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int p, q;
    cin >> p >> q;
    vector<int> s;
    // int sum = 0;
    while (p--)
    {
        int n;
        cin >> n;
        s.push_back(n);
    }
    while (q--)
    {
        int sum = 0;
        int a, b;
        cin >> a >> b;
        for (int i = q-1; i < b; i++)
        {
            cout << s[i]<<" ";
        }
        cout << endl;
        // cout << sum << " ";
    }
}