#include<bits/stdc++.h> 
using namespace std;
int main(){
int number;
cin >> number;
int firstDigit = number / 1000;
  int lastDigit = number % 10;
  int remainingDigits = number % 1000 / 10;
  int swappedNumber = lastDigit * 1000 + remainingDigits * 10 + firstDigit;
  cout << swappedNumber<<endl;
}

