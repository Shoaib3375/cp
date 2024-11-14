#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>> v[i];
    }
    int cnt = 1;
    int mx = 1;
    for (int i = 1; i < n; i++)
    {
        if(v[i]>=v[i-1]) cnt++;
        else cnt = 1;
        mx = max(mx,cnt);
    }
    cout << cnt<<endl;
    return 0;
    
}