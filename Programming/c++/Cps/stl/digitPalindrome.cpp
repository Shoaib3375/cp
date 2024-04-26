#include <bits/stdc++.h>
// https://www.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1
using namespace std;
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    int n;
    cin >> n;
    int sum =0;
    while (n!=0)
    {
        int rem = n%10;
        sum += rem;
        n/=10;
    }
    int tmp = sum;
    string sum_str = to_string(sum);
    reverse(sum_str.begin(),sum_str.end());
    int tm = stoi(sum_str);
    // cout << tm;
    if(tmp == tm){
        return 1;
    }else{
        return 0;
    }
    
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int sum = 0;
    
//     // Take the absolute value of n to handle negative numbers
//     n = abs(n);

//     while (n != 0) {
//         int rem = n % 10;
//         sum += rem;
//         n /= 10;
//     }

//     cout << sum << endl;
    
//     return 0;
// }
