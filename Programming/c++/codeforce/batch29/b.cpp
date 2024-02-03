#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

main()
{
    string str;
    cin >> str;
    bool sc = str.length() % 2 == 0;
    if (sc)
        if (str.substr(0, str.length() / 2) != str.substr(str.length() / 2, str.length() / 2))
            sc = false;

    if (sc)
    {
        cout<<"yes"<<endl; 
    }else{
        cout <<"no"<<endl;
    }
    
}
