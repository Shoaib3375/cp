#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[123], n;
	cin >>n;
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	cout << sum;
}