#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    int a,b;
    int ans = 0;
    int curr = 0;
    while (t--)
    {
        cin>> a>> b;
        ans -= a;
        ans += b;
        if(ans > curr){
            curr = ans;
        }


    }
    cout << curr<<endl;
}