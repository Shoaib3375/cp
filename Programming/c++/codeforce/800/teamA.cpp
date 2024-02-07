#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main()
{
    int t, p, v,to, number = 0;
    cin >> t;
    while (t--)
    {
        cin >> p >> v >> to;
        if ((p + v + to) >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
}