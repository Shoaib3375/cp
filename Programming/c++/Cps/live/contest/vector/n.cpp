#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, o, s = 0, freq = 0;
    cin >> n >> m >> o;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= m)
            s += a[i];
        if (s > o)
        {
            freq++;
            s = 0;
        }
    }

    cout << freq << endl;
    return 0;
}
