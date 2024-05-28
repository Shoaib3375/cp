#include <bits/stdc++.h>
using namespace std;
const int mx = 2000 + 123;
int a[mx];
int main()
{
    int n;
    cin >> n;
    bool f = false;
    while (n--)
    {
        int i;
        cin >> i;
        if (i == 1)
        {
            f = true;
        }
    }
    if (f)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}