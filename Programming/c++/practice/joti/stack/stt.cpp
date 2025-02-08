#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> j;
    string s;
    cin >> s;

    for (char i : s)
    {
        if (i == '(')
        {
            j.push(i);
        }
        else if (i == ')' && !j.empty() && j.top() == '(')
        {
            j.pop();
        }
    }
    if (j.empty())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}