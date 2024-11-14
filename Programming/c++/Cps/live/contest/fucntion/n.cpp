#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>> a>> b;
    int abm = a*b;
    int abs = a+b;
    if(abm>=abs){
        cout << abm-abs<<endl;
    }else{
        cout << abs - abm<<endl;
    }
}