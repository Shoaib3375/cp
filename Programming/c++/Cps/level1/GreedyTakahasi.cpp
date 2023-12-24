#include <bits/stdc++.h>
using namespace std; 
int main()
{
  long long a,b,k;
  cin >> a>> b>> k;
  if (k <= a)
  {
    cout << a-k <<" "<< b;
  }else if(k<(a +b)){
    cout << "0 " << a+b-k;
  }else{
    cout << 0 << " " << 0;
  }
  return 0;
}