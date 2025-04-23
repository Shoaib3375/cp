#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "RacECar";

    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout << s<<endl;

    string temp;
    temp = s;

    reverse(s.begin(),s.end());
    if(s==temp){
        cout << "Palindrome";
    }else{
        cout << "NO";
    }

}