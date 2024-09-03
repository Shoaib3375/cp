#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[2*n];
    int a= 0,b=0,c=0,d=0;
    for (int i = 0; i < 2*n; i=i+2)
    {
        cin>> arr[i]>>arr[i+1];
    }
    for (int i = 0; i < 2*n; i=i+2)
    {
        if(arr[i] == 0){
            a++;
        }else{
            b++;
        }
        if(arr[i+1] == 0){
            c++;
        }else{
            d++;
        }
    }
    int ans = min(a,b)+min(c,d);
    cout << ans<<endl;
    
    
}