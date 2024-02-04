#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double

main()
{

    int a, b, i, count, lucky, unlucky = 0;
    cin >> a >> b;

    for (i = a; i <= b; i++)
    {
        count = i;
        lucky = 0;

        while (count)
        {
            if (count % 10 != 7 && count % 10 != 4)
                lucky++;

            count /= 10;
        }

        if (!lucky)
        {
            cout << i << " ";
            unlucky++;
        }
    }

    if (!unlucky)
        cout << "-1" << endl;
}