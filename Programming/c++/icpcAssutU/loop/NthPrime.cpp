#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

main()
{
    int x;
    cin >> x;
    for (int i = 2; i <= x; i++)
    {
        bool prime = true;

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