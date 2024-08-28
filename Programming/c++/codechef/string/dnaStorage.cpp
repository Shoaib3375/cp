#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        string temp ="";
        cin >> s;
        for (int i = 0; i < n; i+=2)
        {
            if(s[i]=='0'&&s[i+1]=='0') temp+= 'A';
            if(s[i]=='0'&&s[i+1]=='1') temp+= 'T';
            if(s[i]=='1'&&s[i+1]=='0') temp+= 'C';
            if(s[i]=='1'&&s[i+1]=='1') temp+= 'G';
        }
        cout << temp<<endl;
        
    }
}
