#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        sum += a;
    }
    cout <<fixed<<setprecision(12)<< sum/(1.0*n)<<endl;
    
}