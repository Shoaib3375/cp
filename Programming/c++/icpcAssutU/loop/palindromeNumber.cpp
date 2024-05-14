#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, result = 0, rem;
    cin >> n;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        result = result * 10 + rem;
        temp = temp / 10;
    }
    cout << result << endl;
    if (result == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
