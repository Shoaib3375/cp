#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    bool f = false;
    while (n!=0)
    {
        int x = n%10;
        if(x==7){
            cout << "Yes\n";
            break;
        }
        n /= 10;        
    }
    cout << "No\n";
    
}