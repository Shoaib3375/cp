#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> v;

    int n;
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int con = 1;
    for (int i = 0; i < n; i++)
    {
        if(v[i]< con) continue;
        con++;
    }
    cout<< con-1;
    return 0;
    
    
}