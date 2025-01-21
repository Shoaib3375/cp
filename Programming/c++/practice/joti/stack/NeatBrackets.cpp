#include<bits/stdc++.h>

using namespace std;


int main()
{
    stack<char> stack;
    string s;
    cin>> s;
    for (char ch : s)
    {
        if (ch == '(')
        {
            stack.push(ch);
        }
        else if (ch == ')' && !stack.empty() && stack.top() == '(')
        {
            stack.pop();
        }
        
    }
    if( stack.empty()) {
        cout << "Yes"<<endl;
    } else{
        cout << "No"<<endl;
    }


    return 0;
}
