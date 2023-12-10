#include<bits/stdc++.h> 
using namespace std;
int main(){
  int n;
  cin >> n;
  int middleDigits = (n / 10) % 100;
  cout << middleDigits<<endl;
}