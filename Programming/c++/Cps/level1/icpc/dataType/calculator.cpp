#include <bits/stdc++.h>
using namespace std;
main()
{
    long long x, y;
    cin >> x >> y;
    long long sum = x + y;
    long long mul = x * y;
    long long sub = x - y;
    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, mul);
    printf("%lld - %lld = %lld\n", x, y, sub);
    // cout << x << " + " << y << " = " << long long << endl;
    // cout << x << " * " << y << " = " << mul << endl;
    // cout << x << " - " << y << " = " << sub << endl;
}

// 5 + 10 = 15
// 5 * 10 = 50
// 5 - 10 = -5
