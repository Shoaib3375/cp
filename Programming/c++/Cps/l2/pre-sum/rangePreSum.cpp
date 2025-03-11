#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>> n>>q;
    int arr[n+2] = {0};
    while (q--)
    {
        int l,r,x;
        cin>> l>> r>> x;
        arr[l] += x;
        arr[r+1] -=x;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i-1];
        cout << arr[i]<<' ';
    }
    cout <<endl;
    return 0;   
}