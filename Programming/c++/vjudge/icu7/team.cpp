#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  int cnt = 0;
  cin >> t;
  while(t--){
    int a, b, c;
    
    cin >> a >> b >> c;
    if(a + b + c >=2){
      cnt++;
    }
  }
  cout << cnt<<endl;
}