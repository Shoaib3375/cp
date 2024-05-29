#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(),v.end());
    int mx = v[3];
    int x = mx - v[0];
    int y = mx - v[1];
    int z = mx - v[2];
    cout << x<<" "<<y<<" "<<z<<endl;

}