#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> v;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        v.push_back(l);
    }

    sort(v.begin(), v.end());
    while (m--)
    {
        int x;
        cin >> x;
        int up = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout << up <<" ";
    }
    cout << endl;
}