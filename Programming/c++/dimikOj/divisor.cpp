#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t, n, j, i;
	cin >> t;
	for (int i = 1; i <= n; i++)
	{
		cin >> n;
		cout << i;

		for (int j = 1;j <=n ; j++)
		{
			if (n%i == 0)
			{
				cout << j;
			}
		}
		cout << "\n";
	}
	return 0;
}