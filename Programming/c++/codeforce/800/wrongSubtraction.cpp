#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    while (k--)
    {
        // int c = 
        if(n%10==0){
            n = n/10;
        }else{
            n--;
        }
    }
    cout << n<<endl;
    
}