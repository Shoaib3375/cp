#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int i = 1;
  int cnt = 0;
  while(i*i <= n){
    if (n % i == 0)
    {
      cnt++;
      if (i!=n/i)
      {
        cnt++;
      }
    }
    i++;
  }
  cout << cnt;
}