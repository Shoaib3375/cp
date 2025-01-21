#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<char> st;
    string s;
    
    cin>> s;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        st.insert(ch);
    }

    for (auto &&i : st)
    {
        cout << i<<' ';
    }
    
    
}