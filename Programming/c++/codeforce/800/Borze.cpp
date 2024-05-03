#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(c =='-'){
            i++;
            char b = s[i];
            if(b=='.'){
                cout << "1";
            }else{
                cout << "2";
            }
        }else{
            cout << "0";
        }
    }
    
}