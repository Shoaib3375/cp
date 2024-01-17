#include <bits/stdc++.h>
using namespace std;
const int mx = 123;
int a[mx][mx];
int b[mx];
int freq[mx];
#define ll long long

int main() {
  int m, n;
  cin >> n >> m;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cout << "(" <<i <<","<< j <<")"<< a[i][j]<< "\t";
    } cout<<"\n";
  }
}
