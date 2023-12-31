#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  long long a[200000], n;
  cin >>n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  cout << a[2];
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += a[i];
  }
  cout << sum;
}