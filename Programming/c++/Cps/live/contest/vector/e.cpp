#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,k;
    cin>> n>> k;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>> a;
        v.push_back(a);
    }
    int kth = v[k-1];
    
    sort(v.begin(),v.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]>=kth&&v[i]!=0) cnt++;
    }
    cout << cnt<<endl;
    
    
}