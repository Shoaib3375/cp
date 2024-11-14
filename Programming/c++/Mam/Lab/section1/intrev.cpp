#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, reversed = 0,ans =0;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        ans += digit;
        num = num / 10;
    }
    
    cout << "Reversed number: " << reversed << endl;
    cout << "Sum of digits: " << ans << endl;
    return 0;
}
