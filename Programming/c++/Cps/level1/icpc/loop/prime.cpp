#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    int t;
    cin >> t;
    bool prime = true;
    for (int i = 2; i < t; i++)
    {
         if ((t % i) == 0)
        {
            prime = false;
            break;
        }
    }
    if(prime){
        cout << "YES"<<endl;
    }else{
        cout << "NO"<<endl;
    }
    
}