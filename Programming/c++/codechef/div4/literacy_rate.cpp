#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main(){
    int t;
    cin >> t;

    while(t--){

        ll p, l;
        cin >> p>>l;
        double literacy_rate = ((double)l / p) * 100;

        if (literacy_rate >= 75) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
