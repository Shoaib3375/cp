#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b;
    c = a + 1;
    d = c;
    while (9 < d)
        d /= 10;
    if (a == b)
        cout << a << 1 << " " << b << 2 << endl;
    else
    {
        if (d == b)
            cout << a << " " << c << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}