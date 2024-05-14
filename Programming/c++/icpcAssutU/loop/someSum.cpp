#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int result = 0;
    for (int i = 1; i <= N; ++i)
    {
        int currentSum = 0;
        int temp = i;
        while (temp > 0)
        {
            currentSum += temp % 10;
            temp /= 10;
        }
        if (A <= currentSum && currentSum <= B)
        {
            result += i;
        }
    }
    cout << result << endl;
    return 0;
}