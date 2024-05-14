#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    char x;
    cin >> x;

    if (x >= 'a' && x <= 'z')
    {
        cout << static_cast<char>(x-'a' + 'A');
    } else {
        cout << static_cast<char>(x-'A' + 'a');
    }
}