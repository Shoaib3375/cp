#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string str;
        cin>>str;
        string cf= "codeforces";
        int cnt=0;
        for (int i = 0; i <str.size(); i++)
        {
            if (str[i]!=cf[i])
            {
                cnt++;
            }
        } 
        cout<<cnt<<endl;
    }
}