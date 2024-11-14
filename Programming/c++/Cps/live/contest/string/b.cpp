#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string result = "";

    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && s[i] == 'n' && s[i + 1] == 'a')
        {
            result += "nya";
            i++;
        }
        else
        {
            result += s[i];
        }
    }

    cout << result << endl;

    return 0;
}
