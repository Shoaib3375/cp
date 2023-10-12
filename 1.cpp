// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// const ll Mod = 998244353;
// const ll INF = 0x3f3f3f3f;


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int minOperationsToSubstring(string x, string s) {
    int minOps = -1;
    int xLength = x.size();
    int sLength = s.size();
    
    for (int i = 0; i < xLength; i++) {
        if (sLength > xLength) {
            break; // If s is longer than x, it's impossible
        }
        
        int operations = 0;
        int k = i;
        
        for (int j = 0; j < sLength; j++) {
            if (x[k] != s[j]) {
                operations = -1;
                break;
            }
            
            k++;
            if (k == xLength) {
                k = 0;
            }
        }
        
        if (operations != -1 && (minOps == -1 || operations < minOps)) {
            minOps = operations;
        }
    }
    
    return minOps;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int minOps = minOperationsToSubstring(x, s);
        cout << minOps << endl;
    }

    return 0;
}
