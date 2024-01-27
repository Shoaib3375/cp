#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

void solve()
{
    int n, k;
    cin >> n >> k;
    string start = "abcdefghijklmnopqrstuvwxyz";
    string t = start.substr(0, k);
    while (n--)
    {
        cout << t;
    }
    cout << endl;
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
