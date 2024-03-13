#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <=t; i++)

    {
        int a, b, c, big, small, mid;
        cin >> a >> b >> c;
        if (a >= b && a >= c)
            big = a;
        else if (b >= c && b >= a)
            big = b;
        else
            big = c;

        if (a <= b && a <= c)
            small = a;
        else if (b <= a && b <= c)
            small = b;
        else
            small = c;
        mid = a + b + c - big - small;
        cout << "Case " << i << ": " << small << " " << mid << " " << big << endl;
    }
}
