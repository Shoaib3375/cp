#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define do double
main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int result = ((A % 100) * (B % 100) % 100 * (C % 100)) % 100 * (D % 100) % 100;
    if (result < 10)
    {
        cout << "0" << result << endl;
    }
    else
    {
        cout << result << endl;
    }
}
