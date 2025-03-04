#include<bits/stdc++.h>

using namespace std;

string isCorrect(string s)
{
    
    stack<char> stack;
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
       
        else
        {
            return "No";
        }
    }
    return stack.empty() ? "Yes" : "No";
}

int main()
{

        string str;
        getline(cin, str);
        string result = isCorrect(str);
        cout << result << endl;
    return 0;
}
