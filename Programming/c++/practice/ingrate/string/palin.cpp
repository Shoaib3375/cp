#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string rev = s;
    reverse(s.begin(),s.end());
    if(s== rev){
        cout << "palin";
    }else{
        cout << "No";
    }

}