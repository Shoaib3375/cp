#include<bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int h,w;
    cin >> h >> w;
    if (h==0 && w==0) break;

    for (int i = 0; i < h; i++)
    {
      for (int i = 0; i < w; ++i)
      {
        cout <<"#";
      }
      cout << endl;
    }
    cout << endl;
  }
}