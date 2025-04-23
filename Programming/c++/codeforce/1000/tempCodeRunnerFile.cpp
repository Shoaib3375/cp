#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s; 

    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    
        s[0] = toupper(s[0]);  


    cout << s << endl;
}

int main() {
    solve();
    return 0;
}
