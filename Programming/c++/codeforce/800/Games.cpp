#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t],b[t];
    int cnt = 0;
    for (int i = 1; i <=t; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i <=t; i++)
    {
        for (int j = 1; j <=t; j++)
        {
            if (a[i] == b[j])
                cnt++;
        }
    }
    cout << cnt << endl;
}
