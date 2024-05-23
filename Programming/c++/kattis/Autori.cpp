#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    
    for (int  i = 0; i < s.size(); i++)
    {
        if(s[i]<91&&s[i]>64){
            cout << s[i];
        }
    }
    cout << endl;
    
}