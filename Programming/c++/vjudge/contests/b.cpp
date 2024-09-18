#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    while (n--)
    {
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            int t;
            cin>> t;
            sum += t;
            
        }
        cout << sum<<endl;
        
    }
    
    return 0;
}