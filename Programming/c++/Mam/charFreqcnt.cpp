#include<bits/stdc++.h>
using namespace std;

int al[26];
int main(){
    string s = "amarsonarbangla";
    for (int i = 0; i < s.length(); i++)
    {
        if('a'<=s[i] && s[i]<='z'){
            int len = s[i] - 'a';
            al[len]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(al[i]>=1){
            // 0 + 97 = 97 = a
            cout << char( i + 'a')<<" : "<<al[i]<<endl;
        }
    
    }
    return 0;
    
    
}