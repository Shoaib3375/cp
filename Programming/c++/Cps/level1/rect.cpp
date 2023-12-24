#include <bits/stdc++.h>
using namespace std;

int main(){
  while (true){
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) break;

    for (int j = 1; j <= m; j++) 
      cout << "#";
    
    cout << endl;

    for (int i = 2; i <= n; i++){
      cout << "#";
      for (int j = 2; j <= m-1; j++) 
        cout << ".";
      cout << "#" << endl;
    }

    for (int j = 1; j <= m; j++) 
      cout << "#";
    
    cout << endl << endl;
  }
}
