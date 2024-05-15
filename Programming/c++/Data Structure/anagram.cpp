#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin>> s>>s2;
    sort(s.begin(),s.end());
    sort(s2.begin(),s2.end());
    if(s==s2){
        cout << "Yes"<<endl;
    }else{
        cout << "No"<<endl;
    }
}