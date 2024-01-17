#include <bits/stdc++.h>
using namespace std;
const int mx = 100013;
int a[mx];
int b[mx];
int freq[mx];
#define ll long long
int main(){

  int n,i;
  ll a[100],sum=0;
  cin >> n;
  for(i=0;i<n;i++)
  {
    cin>> a[i];
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2!=0)
    {
      sum=sum+a[i];
    }
  }
  cout<<sum;
}