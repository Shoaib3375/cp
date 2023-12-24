#include <bits.stdc++.h>
int main(){
	int a[11];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		mx = max(mx, a[i]);
	}
	cout<<mx;
	return 0;
}