#include<bits/stdc++.h>
using namespace std;
  int a[11];
int main(){

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  int mx = 1e9;
  for (int i = 1; i <= n; i++)
  {
    mx = min(mx, a[i]);
  }
  cout<<mx;
  return 0;
}
