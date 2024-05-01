#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int sum = 0;
    while (t--)
    {
        int a,b,c;
        cin>> a>> b>> c;
        sum += a;
        sum += b;
        sum += c;
    }
    if(sum == 0)cout << "YES"<<endl;
    else cout << "NO"<<endl;

}