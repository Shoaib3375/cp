#include <bits/stdc++.h>
using namespace std;
const int mx = 123;
int a[mx][mx];
int b[mx];
int freq[mx];
#define ll long long

int main() {

  ll h,w;

  while(1){
    cin >> h>>w;
    if (h==0 && w== 0) break;
    for (int i = 1; i <=h; ++i)
    {
      for (int j = 1; j <=w; ++j)
      {
        if (i%2!=0)
        {
          if (j%2 != 0)
          {
            cout<<"#";
          }else{
            cout <<".";
          }
        }if (i%2==0){
        
          if (j%2 != 0)
          {
            cout <<".";
          }else{
            cout <<"#";
          }
        }
      }
      cout<<endl;
    }
    cout<< endl;
  }
  return 0;
}
