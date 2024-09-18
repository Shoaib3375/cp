#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r;
    cin >> l >> r;
    if(l==1&& r == 0) cout << "Yes\n";
    else if(l==0 && r==1) cout <<"No\n";
    else cout << "Invalid\n";
}