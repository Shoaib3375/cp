#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for (int i = 3; i*i <= n; i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>> t;
    while(t--){
    int n;
    cin >> n;
    if(isPrime(n)){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
    }
    return 0;
}