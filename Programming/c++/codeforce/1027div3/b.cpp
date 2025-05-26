#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int hf = n / 2;
        int cnt = 0, cnt1 = 0;
        for (char c : s) {
            if (c == '0') cnt++;
            else cnt1++;
        }

        if (k > hf) {
            cout << "NO\n";
            continue;
        }

        bool ok = false;
        for (int x = 0; x <= k; ++x) {
            int tot = 2*x + (hf - k);
            int tot2 = 2*(k - x) + (hf - k);
            if (tot <= cnt && tot2 <= cnt1) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}