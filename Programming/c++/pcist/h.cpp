#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    int cnt = 1;
    while (t--)
    {
        int n;
        unsigned long long int sum = 0;
        cin>> n;
        for (int i = 0; i < n; i++)
        {
            int j;
            cin>> j;
            if(j>=0) sum+=j;
        }
        cout <<"Case "<<cnt<< ": " <<sum<<endl;
        cnt++;
    }
    return 0 ;
    
}