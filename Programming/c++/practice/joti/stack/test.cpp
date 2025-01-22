#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    cin >> s;
    for (auto i : s)
    {
        // (((.))).()
        if (i == '(')
        {
            st.push(i);
        }
        else if (i == '{')
        {
            st.push(i);
        }
        else if (i == '[')
        {
            st.push(i);
        }
        else if (i == ')' && !st.empty() && st.top() == '(')
        {
            st.pop();
        }
        else if (i == '}' && !st.empty() && st.top() == '}')
        {
            st.pop();
        }
        else if (i == ']' && !st.empty() && st.top() == ']')
        {
            st.pop();
        }
        else
        {
            cout << "false" << endl;
            return 0;
        }
    }
    if (st.empty())
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}