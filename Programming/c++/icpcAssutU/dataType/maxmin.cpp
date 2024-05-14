#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main(){
    int a,b,c;
    cin >> a>> b>>c;
    int min =c;
    int max = a;
    if(max<b) max = b;
    if(max<c) max = c;
    if(min>b) min = b;
    if(min>a) min = a;
    cout << min <<" "<<max<<endl;

}