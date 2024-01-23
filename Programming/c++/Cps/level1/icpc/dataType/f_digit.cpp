#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    int fd;
    cin >> fd;

    
    while (fd >= 10)
    {
        fd /= 10;
    }
    if (fd % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

}
