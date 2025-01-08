#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b){
    int ans = a*3 + b*4;
    return ans;
}
int main(){
    int ret = sum(3,5);
    cout << ret<<endl;
}