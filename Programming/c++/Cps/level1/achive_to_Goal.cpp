#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K,M;
  cin>>N>>K>>M;
  int sumOfNum = 0;
  for (int i = 1; i < N; i++)
  {
    int number;
    cin >> number;
    sumOfNum += number;
  }
  int x = (N * M) - sumOfNum;
  if(x < 0) x = 0;
  if(x > K) x = -1;
  cout<<x;
}