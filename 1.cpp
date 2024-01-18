#include <bits/stdc++.h>
using namespace std;
const int mx = 123;
int a[mx][mx];
int b[mx];
int freq[mx];
#define ll long long



int main() {

    int n; 
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        string output = "1";
        
        for (int j = 1; j <= i; ++j) {
            char nextChar = 'A' + j - 1;
            output += nextChar;
        }

        cout << output << endl;
    }

    return 0;
}
