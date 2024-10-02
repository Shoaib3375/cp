#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void min_operations(){
    long long n,k;
    cin>> n>> k;
    ll op = 0;
    if(k==1){
        cout << n<<endl;
    }else{
        while (n>0)
        {
            op += n%k;
            n /=k;
        }
        cout << op<<endl;
    }
    
}
int main(){
    ll t;
    cin>> t;
    while (t--)
    {
        min_operations();
    }
    return 0;
}