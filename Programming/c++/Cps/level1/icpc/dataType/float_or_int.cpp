#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main(){
    d x;
    cin >> x;
    int integers = static_cast<int>(x);
    d dec = x-integers;

    if(x == integers){
        cout << "int "<<integers<<endl;
    }else{
        cout << "float "<<integers << " "<<fixed<<setprecision(3)<<dec<<endl;
    }
}