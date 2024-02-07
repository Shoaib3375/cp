#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(s.length()>10){
            cout << s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }else{
            cout << s<<endl;
        }
    }
    
}