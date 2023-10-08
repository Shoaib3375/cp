#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    char op;
    cin >> a;
    cin >> op;
    cin >> b;
 
    int l = op;

    if (l == 43)
    {
        cout << a + b;
    }else{
        cout << a - b;
    }
    
}