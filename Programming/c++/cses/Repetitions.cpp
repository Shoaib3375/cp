#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    // sort(s.begin(),s.end());
    int mx = 0, cur = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!=s[i+1]){
            mx = max(mx,cur);
            cur = 0;
        }
        cur++;
    }
    mx = max(mx,cur);
    cout << mx<<endl;
    
    
}