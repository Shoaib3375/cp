#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (auto i : v)
    {
        cout << i<<' ';
    }
    cout << endl;
    sort(v.rbegin(),v.rend());
    for (auto i : v)
    {
        cout << i<<' ';
    }
    
    
}