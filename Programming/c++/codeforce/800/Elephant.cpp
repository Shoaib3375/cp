#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n, cnt = 0;
    cin >> n;

    if (n % 5 == 0)
    {
        cout << n / 5 << endl;
    }
    else
    {
        cout << n / 5 + 1 << endl;
    }
    return 0;
}