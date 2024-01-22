#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    int X;
    cin >> X;
    int num_digits = log10(X) + 1;
    int first_digit = X / pow(10, num_digits - 1);
     if (first_digit % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
}