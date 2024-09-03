#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int s, d;
    cin>> s>>d;
    if(s>d){
        swap(s,d);
    }
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