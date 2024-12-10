#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>> a;
        v.push_back(a);
    }
    // onlinegdb.com
    // v.pop_back();
    for (auto i : v)
    {
        sum += i;
    }
    
    cout << sum<<endl;


    
}