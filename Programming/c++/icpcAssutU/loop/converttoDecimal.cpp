#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

int main()
{
    int t;
    cin >> t;
    ll n;
    while (t--)
    {
        cin >> n;
        int onei = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                onei++;
            }
            n /= 2;
        }
        ll sum = 0;
        for (int z = 0; z < onei; z++)
        {
            sum += 1 * pow(2, z);
        }
        cout << sum << endl;
    }

    return 0;
}