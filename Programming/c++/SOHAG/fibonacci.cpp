#include<bits/stdc++.h>
using namespace std;

long long save[1000007];

long long fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(save[n]!=-1) return save[n];
    save[n] = fib(n-1) + fib(n-2);
    return save[n];
    // if(n==0|| n==1) return 1;
    // else if(save[n] == 0){
    //     save[n] = fib(n-1)+fib(n-2);
    // }
    // return save[n];

}
int main(){
    memset(save,-1,sizeof save);
    int n;
    cin>> n;
    // cout << save[3]<<endl;
    cout << (long long)fib(n)<<'\n';
}