#include <bits/stdc++.h>

using namespace std;
#define ll long long
int solve(string s) {
int n = s.length();
vector<int> cnt(2,0);
int p = 0;
for (int i = 0; i < n; i++)
{
    cnt[s[i] - '0']++;
    if(cnt[0] && cnt[1]){
        p++;
        cnt[0] = cnt[1] = 0;
    }
}
return p + 1;


}

int main() {
    int t;
    cin >> t;
    while (t--) {
       string s;
       cin>> s;
       cout << solve(s)<<endl;
    }
    return 0;
}
