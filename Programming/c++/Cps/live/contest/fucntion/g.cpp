#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool f = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        if (i % 2 == 0 && isupper(s[i]))
        {
            f = 0;
        }
        else if (i % 2 == 1 && islower(s[i]))
        {
            f = 0;
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
