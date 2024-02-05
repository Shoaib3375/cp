#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main()
{

    int t, Petya, Vasya, Tonya, number=0;
    cin >> t;
    while (t--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
}