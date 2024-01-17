#include <bits/stdc++.h>
using namespace std;
const int mx = 100013;
int a[mx];
int b[mx];
int freq[mx];
#define ll long long

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int j;
  for (int i = 0; i < n; ++i) {
    for (j = 0; j < n; ++j) {
      if (i == j) {
        continue;
      }
      if (a[i] == a[j]) {
        break;
      }
    }
    if (j == n) {
      cout << a[i] << " ";
    }
  }
  return 0;
}
