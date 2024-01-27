#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    int x;
    cin >> x;
    int last = x%10;
    while (x >= 10)
    {
        x /= 10;
    }
    if(last %x == 0|| x%last ==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}