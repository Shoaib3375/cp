#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(i%2!=0){
            continue;
        }else{
            cout << i <<endl;
        }
    }
    if(n==1||n==-1||n==0){
        cout << "-1"<<endl;
    }
}