#include<bits/stdc++.h>
using namespace std;

int al[26];
int main(){
    string s;
    cin>> s;
    for (int i = 0; i < s.size(); i++)
    {
        if('a'<=s[i] && s[i]<='z'){
            int j = s[i] - 'a';
            al[j]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(al[i]>=1){
            cout << char( i + 'a')<<" : "<<al[i]<<endl;
        }
    
    }
    return 0;
    
    
}