#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{

    int n;
    cin >> n;
    ll fact = 1;
    if (n == 0)
    {
        fact = 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
    }

    cout << fact << endl;
}