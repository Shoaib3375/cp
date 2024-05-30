#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ull fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    ull f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
        f = f % 10000;
    }
    return f;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n)<<endl;
    return 0;
}