#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    string s, t;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        }
        else
        {
            t += ".";
            t += s[i];
        }
    }
    cout << t << endl;
}