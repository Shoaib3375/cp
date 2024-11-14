#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> apcnt(n);
    vector<int> aprtm(m);
    for (int i = 0; i < n; i++)
    {
        cin >> apcnt[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> aprtm[i];
    }
    sort(apcnt.begin(), apcnt.end());
    sort(aprtm.begin(), aprtm.end());
    int i = 0;
    int j = 0;
    int matches = 0;
    while (i < n)
    {
        while (j < m && aprtm[j] < apcnt[i] - k)
        {
            j++;
            if (abs(aprtm[j] - apcnt[i] <= k))
            {
                matches++;
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
    }
    cout << matches;
}