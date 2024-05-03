#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    int st = n;
    for (int i = n + 1; i <= m; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                flag = false;
        }
        if(flag){
            st = i;
            break;
        }
    }
    if (st == m)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}