#include <bits/stdc++.h>
using namespace std;

void rev(int i, int n, vector<int>& a)
{
    if(i < n){
        rev(i + 1, n, a);
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    rev(0, n, a);
    cout << endl;
    return 0;
}
