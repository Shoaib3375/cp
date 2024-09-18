#include <bits/stdc++.h>
using namespace std;
vector<int> v;

void solve()
{
    int n;
    cin >> n;
    int ck = 0;

    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        if (n % 2)
            ck++;
        
    }
    cout << ck<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}