#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,m;
    cin>> h>> m;
    double result;
    
    result = abs(0.5*((60*h)-11*m));
    if( result > 180){
        result = 360 - result;
    }
    cout << setprecision(7)<<fixed<<result;
}