#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int res = 0;
    for (auto i : cnt) {
        if (i.second < i.first)
            res += i.second;
        else
            res += i.second - i.first;
    }
    cout << res;
    return 0;
}