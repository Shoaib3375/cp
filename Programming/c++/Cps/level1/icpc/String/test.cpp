#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        
        bool isGood = false;
        for (int i = 2; i < s.length(); ++i) {
            if (s[i - 2] == '0' && s[i - 1] == '1' && s[i] == '0') {
                isGood = true;
                break;
            } else if (s[i - 2] == '1' && s[i - 1] == '0' && s[i] == '1') {
                isGood = true;
                break;
            }
        }
        (isGood) ? cout << "Good\n" : cout << "Bad\n";
    }
    return 0;
}
