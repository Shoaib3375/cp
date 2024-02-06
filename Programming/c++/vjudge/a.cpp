#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double


int main() {

    int X, Y, Z;
    cin >> X >> Y >> Z;

    if (X*X + Y*Y == Z*Z) {
        cout << max(X, max(Y, Z)) << endl;
    } else if (X*X + Z*Z == Y*Y) {
        cout << max(X, max(Y, Z)) << endl;
    } else {
        cout << max(Y, max(X, Z)) << endl;
    }

    return 0;
}
