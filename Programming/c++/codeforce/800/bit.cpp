#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main()
{
    int n, x=0;
    cin >> n;

    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}