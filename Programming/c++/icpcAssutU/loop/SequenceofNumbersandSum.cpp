#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main()
{
    int a, b;
    while (cin >> a >> b && !(a <= 0 || b <= 0))
    {

        if (b > a)
        {
            swap(a, b);
        }
        int sum = 0;
        for (int i = b; i <= a; i++)
        {
            cout << i << " ";
            sum = sum + i;
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}