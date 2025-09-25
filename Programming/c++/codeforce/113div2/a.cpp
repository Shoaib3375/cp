#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>> s;
    char d;
    cout << *min_element(s.begin(), s.end()) << endl;
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