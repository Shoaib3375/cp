#include<bits/stdc++.h>
using namespace std;

int save[55];

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(save[n]!=-1) return save[n];
    save[n] = fib(n-1) + fib(n-2);
    return save[n];

}
int main(){
    memset(save,-1,sizeof save);
    int n = 40;
    cout << fib(n)<<'\n';
}