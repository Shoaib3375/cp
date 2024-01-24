#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main(){
  int a, b;
  char s;
  cin >> a>>s>>b;
  if ((s == '<' && a < b) || (s == '>' && a > b) || (s == '=' && a == b))
    cout << "Right"<<endl;
  else
    cout << "Wrong"<<endl;

}