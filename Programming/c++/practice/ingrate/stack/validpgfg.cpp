//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isValid(string& s) {
        stack<char> stack;

        for (auto c : s) {
            
            if (c == '[' || c == '(' || c == '{') {
                stack.push(c);
            } else if(c==')'&&!stack.empty() && stack.top() == '('){
                stack.pop();
            }else if(c=='}'&&!stack.empty() && stack.top() == '{'){
                stack.pop();
            }else if(c==']'&&!stack.empty() && stack.top() == '['){
                stack.pop();
            }else{
                return false;
            }
        }
        

        return stack.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isValid(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends