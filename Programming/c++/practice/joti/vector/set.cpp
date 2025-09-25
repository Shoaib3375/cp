#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while (t--)
    {
        int x, n;
        cin>> x>>n;
        set<int> st;
        for (int i = 0; i < x; i++)
        {
            int a;
            cin>> a;
            st.insert(a);
        }
        
        int usz = st.size();
        if(usz == n){
            cout << "Good"<<endl;
        }else if(usz > n){
            cout << "Average"<<endl;
        }else{
            cout << "Bad"<<endl;
        }
    }

    
}