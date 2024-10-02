#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    multiset<int> st;
    for (int i = 1; i <=n; i++)
    {
        int n;
        cin>> n;
        st.insert(n);
    }
    // st.erase(2);
    for (auto &&i : st)
    {
        cout << i<<" ";
    }

    
    
    
}