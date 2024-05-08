#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        s.insert(n);
    }

    // auto it = next(s.begin(), 1);
    // if (s.size()>1)
    // {
    //     cout << *it << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    if (s.size() == 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << *(++s.begin()) << endl;
    }
}