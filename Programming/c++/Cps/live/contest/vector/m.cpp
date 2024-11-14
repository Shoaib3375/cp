#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int i = n-1;
    while (v[i] == v[n-1])
    {
        i--;
    }
    long long sum = v[n-1] + v[i];
    cout << sum<< endl;
}

int main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}