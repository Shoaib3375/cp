#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define do double
main(){
  ll a, b, c, d;
  cin >> a>> b>>c>> d;
  do x = b * log(a);
  do y = d *log(c);
  if (x>y)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
