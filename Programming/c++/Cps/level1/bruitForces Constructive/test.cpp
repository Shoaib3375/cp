#include <iostream>

using namespace std;

int countRightTriangles(int n) {
    int count = 0;
    for (int c = 1; c <= n; ++c) {

        for (int a = 1; a < c; ++a) {
            for (int b = a; b < c; ++b) {
                if (a*a + b*b == c*c) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countRightTriangles(n) << endl;
    return 0;
}
