#include <bits/stdc++.h>
using namespace std;
int arr[22];
int solve(int x)
{
    return (3 * x * x) + (2 * x) + 4;
}
int main()
{
    int k = 200;
    for (int i = 0; i <= 10; i++)
    {
        arr[i] = solve(i);
    }
    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] >= k)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}