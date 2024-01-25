#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

// Function to find the maximum prime factor of a number
int max_prime_factor(int num)
{
    int max_prime = -1;
    while (num % 2 == 0)
    {
        max_prime = 2;
        num /= 2;
    }
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            max_prime = i;
            num /= i;
        }
    }
    if (num > 2)
    {
        max_prime = num;
    }
    return max_prime;
}

// Function to find the subset with maximum GCD
void find_subset_with_max_gcd(int N, int K)
{
    if (K == 1)
    {
        // If K is 1, the subset with the maximum GCD is the sequence {1, 2, ..., N}
        for (int i = 1; i <= N; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    int max_prime = max_prime_factor(N);

    // Construct the subset with maximum GCD
    for (int i = 1; i < K; i++)
    {
        cout << max_prime * i << " ";
    }
    cout << N - (K - 2) * max_prime << endl;
}

int main()
{
    int T;
    cin >> T; // Number of test cases

    for (int t = 0; t < T; t++)
    {
        int N, K;
        cin >> N >> K;
        find_subset_with_max_gcd(N, K);
    }

    return 0;
}
