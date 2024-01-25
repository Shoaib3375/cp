#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main(){
    ll A, B, C;
    cin >> A>>B>>C;
    ll chef_sale = A * C;
    ll chefina_sale = B * C;
    ll max_sale;
    if (chef_sale > chefina_sale) {
        max_sale = chef_sale;
    } else {
        max_sale = chefina_sale;
    }
    cout << max_sale<<endl;
}
