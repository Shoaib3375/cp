#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
bool prime = true;

main()
{
    int x;
    cin >> x;
    for (int i = 2; i <= x; i++)
    {
        for (int j = 2; j < i; j++)
        {

            if (i % j == 0)
            {
                prime = false;
                continue;
            }
        }

        if (prime)
        {
            cout << i << " ";
        }
    }
}