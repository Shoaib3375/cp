#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long result = 0;
        long long tPower = 1;
        for (int i = s.size() -1; i >= 0; --i)
        {
            int binaryDigit = s[i] - '0';
            result =result + (binaryDigit * tPower);
            tPower = tPower * 2;
        }
        cout << result << endl;
    }
}  