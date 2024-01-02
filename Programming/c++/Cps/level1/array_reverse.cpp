#include <bits/stdc++.h>
using namespace std;
const int mx = 100013;
int a[mx];

int b[mx];

#define ll long long

int main(){


  int n;
  cin >> n;
  for (int i = 1; i <=n; i++) {
    cin >> a[i];
  }

  for (int i = 1, j = n; i <= n; i++, j--)
  {
    b[j] = a[i];
  }
  for (int i = 1; i <=n; i++)
  {
    cout << b[i];
    cout << endl;
  }

}