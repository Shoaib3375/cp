#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n>>k;
            int result,num = 1;
        while (n - num * k > -1)
        {
            if (!((n - (num * k)) % num))
            {
                result = num;
            }
            num++;
        }
        cout<<result<<endl;
    }
    return 0;
}