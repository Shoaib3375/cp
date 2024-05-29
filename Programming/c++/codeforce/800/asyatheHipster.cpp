#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
   
    int mn = min(a, b);
    // int nxt = abs((a - b) / 2);
    // cout << mn << " " << nxt << endl;
    int as = max((a-min(a,b))/2,(b-min(a,b))/2);
    cout <<mn<<" "<< as<<endl;
    return 0;
}