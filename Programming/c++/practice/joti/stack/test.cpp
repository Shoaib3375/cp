#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    getline(cin, s);
    for (auto i : s)
    {
        // ((().(
        if (i == '(')
        {
            st.push(i);
        }
        else if (i == ')' && !st.empty() && st.top() == '(')
        {
            st.pop();
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }
    if (st.empty())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}