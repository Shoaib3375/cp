#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double

main()
{
    int t;
    cin >> t;
    for (int i = 1; i <=t*4; i++)
    {
        if (i % 4 == 0)
        {
            cout <<"PUM"<<endl;
        }else{
            cout << i << " ";
        }
    }
}