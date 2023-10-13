#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        if (n%2)
        {
            cout << "Odd"<<endl;
        }else{
            cout << "Even"<<endl;
        }
    }
}
