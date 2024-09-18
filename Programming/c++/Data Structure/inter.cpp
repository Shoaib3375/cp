#include <bits/stdc++.h>
using namespace std;
int calc(int a, int b)
{
    int s = a / (b - 1); 
    int ss = s * (b - 1);
    int dif = a - ss;
    int ans = s - dif;
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "ans : " << calc(a, b);
    return 0;
}