#include <bits/stdc++.h>
using namespace std;

int count_valid_pairs(int n, int m)
{
    int count = 0;
    for (int a = 1; a <= n; ++a)
    {
        for (int b = 1; b <= m; ++b)
        {
            if (__gcd(a, b) == 1)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << count_valid_pairs(n, m) << endl;
    return 0;
}
s