#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<char> st;
    // 
    string s;
    // amarnamejoty
    cin>> s;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        // a
        st.insert(ch);
    }

    for (auto &&i : st)
    {
        cout << i<<' ';
    }
    
    
}