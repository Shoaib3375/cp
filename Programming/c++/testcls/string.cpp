#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    string rev =s;
    s.reserve();
    if(rev==s){
        cout << "Palindrome"<<endl; 
    }else{
        cout << "Not palindrome"<<endl;
    }
}