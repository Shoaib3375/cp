#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 11;
    int a = (1<<30)-1;
    int b = 1-(1<<3);
    int ans = n&(a-b);
    cout <<ans<< endl;
}