#include <bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    while(A--){
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "+" << endl;
        }else{
            cout << "-" << endl;
        }
    }
}