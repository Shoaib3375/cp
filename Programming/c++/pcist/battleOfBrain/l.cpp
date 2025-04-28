#include<bits/stdc++.h>
using namespace std;

int main() {
    long long m;
    cin >> m;
    
    vector<long long> v(m);
    for (long long i = 0; i < m; ++i) {
        cin >> v[i];
    }
    
    long long mx = *max_element(v.begin(), v.end());
    long long mn = *min_element(v.begin(), v.end());
    
    if (mx == mn) {
        long long ways = m * (m - 1) / 2;
        cout << 0 << " " << ways << endl;
    } else {
        long long cntMx = 0, cntMn = 0;
        for (long long i = 0; i < m; ++i) {
            if (v[i] == mx) ++cntMx;
            if (v[i] == mn) ++cntMn;
        }
        cout << mx - mn << " " << cntMx * cntMn << endl;
    }
    
    return 0;
}
