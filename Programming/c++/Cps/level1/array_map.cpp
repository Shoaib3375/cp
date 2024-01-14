#include <bits/stdc++.h>
using namespace std;
const int mx = 100013;
int a[mx];
int b[mx];
int freq[mx];

#define ll long long
int main(){
  int  n;
  cin >>n;
  for (int i = 1; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++)
  {
  	freq[a[i]]++;
  }
  int q;
  cin >> q;
  while(q--){
  	int val;
  	cin >> val;
  	if (freq[val]==0)
  	{
  		cout << freq[val];
  	}else{
  		cout << "";
  	}
  }

}