#include <bits/stdc++.h>
using namespace std;
// codeforce round 917 div 2;
void solve(){
  int n;
  cin >> n;
  vector<int>a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >>a[i];
  }
  bool negative = false;
  bool zero = false;
  for (int i : a)
  {
    if (i<0)
    {
      negative = !negative;
    }else if(i > 0){
      continue;
    }else{
      zero = true;
    }
  }
  if(zero||negative){
    cout<< 0 <<endl;
  }else{
    cout<< 1 <<endl;
    cout<<"1 0"<<endl;
  }
}
int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}