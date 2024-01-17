#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int n,m;
    cin >> n >> m;
    if(n==0 && m==0) break;
    for (int j = 1; j <=m ; j++) cout << "#";
    cout<<endl;
    for (int i = 2; i<=n-1; i++)
    {
      for (int j = 1; j<=m ; j++)
      {
        if (j == 1 || j == m) cout << "#";
        else cout<<".";
      }
      cout<<endl;
    }
    for (int j = 1; j <= m; j++) cout<<"#";
    cout<<endl<<endl;
  }
}