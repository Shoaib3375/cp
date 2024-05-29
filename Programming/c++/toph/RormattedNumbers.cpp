#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if ((len - i) % 3 == 0 && i > 0)
            cout << ",";
        cout << s[i];
    }
    cout << endl;

    return 0;
}