#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int x;
    cin>> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    map<int,int> m;
    for (auto i : v)
    {
        m[i]++;
    }
    cout << m[x];
}