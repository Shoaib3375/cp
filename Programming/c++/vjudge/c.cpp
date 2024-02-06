#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

bool is_prime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int nth_prime(int n)
{
    int count = 0;
    int num = 2;
    while (count < n)
    {
        if (is_prime(num))
        {
            count += 1;
        }
        num += 1;
    }
    return num - 1;
}

int odm(int n)
{
    return pow(nth_prime(n), 2);
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        int result = odm(n);
        cout << result << endl;
    }

    return 0;
}
