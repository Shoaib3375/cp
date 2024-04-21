#include <bits/stdc++.h>
using namespace std;
// complexity O(n).. using two pointer

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int left = 0, right = n - 1;
    int s = 0, d = 0;
    bool f = true;

    while (left <= right) {
        if (f) {
            if (v[left] > v[right]) {
                s += v[left++];
            } else {
                s += v[right--];
            }
            f = false;
        } else {
            if (v[left] > v[right]) {
                d += v[left++];
            } else {
                d += v[right--];
            }
            f = true;
        }
    }

    cout << s << " " << d << endl;

    return 0;
}
