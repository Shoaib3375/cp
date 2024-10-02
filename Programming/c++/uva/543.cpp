#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 123;
bitset<mx> isPrime;
vector<int> primes;

void primeGen(int n)
{
    for (int i = 3; i <= n; i += 2)
        isPrime[i] = 1;

    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime[i] == 1)
        {
            primes.push_back(i);
        }
    }
}

int main()
{

    int lim = 1e6;
    primeGen(lim);

    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        bool done = false;

        for (auto p : primes)
        {
            if (p > n)
                break;

            int a = p;
            int b = n - a;

            if (isPrime[b])
            {
                cout << n << " = " << a << " + " << b << endl;
                done = true;
                break;
            }
        }

        if (!done)
        {
            cout << "Goldbach's conjecture is wrong." << endl;
        }
    }

    return 0;
}