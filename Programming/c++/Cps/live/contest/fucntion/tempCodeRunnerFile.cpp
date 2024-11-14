#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool f = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (i % 2 == 0 && islower(s[i]))
        {
            f = 1;
        }
        else if (i % 2 == 1 && isupper(s[i]))
        {
            f = 1;
        }
    }

    if (f)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}
