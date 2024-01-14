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

  for (int i = 1, j = n; i < j; i++, j--)
  {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;

  }
  for (int i = 1; i <=n; i++)
  {
    cout << a[i]<<endl;
    if (i < n - 1) {
            cout << " ";
        }
  }

}