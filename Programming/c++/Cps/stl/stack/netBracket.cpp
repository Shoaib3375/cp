#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    int cnt = 0;
    for (auto i : s)
    {
        if(i=='('){
            cnt++;
        }else if(i==')'){
            cnt--;
        }
    }
    if(cnt == 0){
        cout << "Yes";
    }else{
        cout << "No";
    }
    
}