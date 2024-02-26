#include <iostream>
#include <sstream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll sum = 0;
        for (int i = 1; i <= n; ++i)
        {
            int num = i;
            while (num > 0)
            {
                sum += num % 10;
                num /= 10;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
