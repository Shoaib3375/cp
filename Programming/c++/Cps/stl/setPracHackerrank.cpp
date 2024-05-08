#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    int t;
    cin >> t;
    while (t--)
    {
        int typ, x;
        cin >> typ>>x;
        if (typ == 1)
            s.insert(x);
        else if (typ == 2)
            s.erase(x);
        else
        {
            if (s.count(x) != 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
