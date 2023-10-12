// https://codeforces.com/contest/1886/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){

   int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        if(n <= 6 || n == 9){
            cout << "NO\n";
        }
        else{
            if(n % 3 == 0){
                cout << "YES\n";
                cout << 1 << ' ' << 4 << ' ' << n - 5 << '\n';
            }
            else{
                cout << "YES\n";
                cout << 1 << ' ' << 2 << ' ' << n - 3 << '\n';
            }
        }
    }

}