#include<bits/stdc++.h> 
using namespace std;
int main(){
  int digit, digit1, digit2, swap;
  cin >> digit;
  digit1 = digit / 10;
  digit2 = digit % 10;
  swap = digit2 * 10 + digit1;
  cout << swap;
}