#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        int n;
        cin >> n; 
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;     
            st.insert(a); 
        }
        auto it = st.rbegin();
        int last = *it;
        ++it; 
        int secondLast = *it;
        cout << (last + secondLast)<<endl;
    }
}