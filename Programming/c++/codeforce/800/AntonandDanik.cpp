#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    int acnt = 0;
    int scnt = 0;

    for (int i = 0; i < t; i++)
    {
        if(s[i]=='A'){
            acnt++;
        }else{
            scnt++;
        }
    }
    if(acnt>scnt){
        cout<<"Anton"<<endl;
    }else if(scnt>acnt){
        cout << "Danik"<<endl;
    }else{
        cout << "Friendship"<<endl;
    }
    return 0;
    
}