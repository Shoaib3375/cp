#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
            cout << i + 2 << endl;
        else
            cout << i << endl;
    }
}