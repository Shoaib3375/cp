#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
       
        vector<int> freq;
        int cnt = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] == a[i-1]) {
                cnt++;
            } else {
                freq.push_back(cnt);
                cnt = 1;
            }
        }
        freq.push_back(cnt);

        int max_freq = *max_element(freq.begin(), freq.end());
        int unique = freq.size();
        cout << max(min(max_freq, unique), min(max_freq-1, unique+1)) << '\n';
    }
    return 0;
}