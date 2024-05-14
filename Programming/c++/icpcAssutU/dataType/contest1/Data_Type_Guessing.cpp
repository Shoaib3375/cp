#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define do double
main()
{
    do a,b,c;
    cin >> a>> b>> c;
    do num = (a*b)/c;
    ll mainNum = num;
    do doNum = num - mainNum;

    if(doNum > 0){
        cout<<"double"<< endl;
    }else if (mainNum <= 2147483647)
    {
        cout << "int"<<endl;
    }else{
        cout << "long long"<<endl;
    }
}