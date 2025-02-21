#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[111];
    int n;
    int cnt = 0,f = -1;
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2){
            cnt++;
            f = i;
        }
    }
    if(cnt==1){
        
        cout << f +1<<'\n';
        return 0;
    }
    cnt =  0; f = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            cnt++;
            f = i;
        }
    }
    cout << f+1<<'\n';
    return 0;
    
    
}