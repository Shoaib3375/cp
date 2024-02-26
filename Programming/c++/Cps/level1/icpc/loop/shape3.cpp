#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

int main()
{
    int n, i, j, z;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; j >= i; j--)
            cout << " ";

        for (z = 1; z < i * 2; z++)
            cout << "*";

        cout << "\n";
    }

    for (i = n; i >= 1; i--)
    {
        for (j = n - 1; j >= i; j--)
            cout << " ";

        for (z = 1; z < i * 2; z++)
            cout << "*";

        cout << "\n";
    }

    return 0;
}