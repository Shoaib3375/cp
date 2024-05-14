#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main(){
    char x;
    cin >> x;
    if(x >= '0' && x <= '9'){
        cout <<"IS DIGIT"<<endl;
    }
    if((x >= 'A' && x<= 'Z')||(x >= 'a' && x<= 'z')){
        cout <<"ALPHA"<<endl;
        if(x >= 'A' && x<= 'Z'){
            cout << "IS CAPITAL"<<endl;
        }
        if(x >= 'a' && x<= 'z'){
            cout <<"IS SMALL"<<endl;
        }
    }
}