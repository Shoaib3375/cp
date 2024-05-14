#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define do double
#define ch char
main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a + b - c == d) cout << "YES"<<endl;
    else if (a+b*c == d) cout << "YES"<<endl;
    else if (a-b+c == d) cout << "YES"<<endl;
    else if (a-b*c == d) cout << "YES"<<endl;
    else if (a*b+c == d) cout << "YES"<<endl;
    else if (a*b-c == d) cout << "YES"<<endl;
    else cout << "NO"<<endl;

    
    // a + b - c = d
    // a + b * c = d
    // a - b + c = d
    // a - b * c = d
    // a * b + c = d
    // a * b - c = d

}