#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main()
{
    int t;
    int sum = 0;

    cin >> t;

    while (t--)
    {
        int a,b;
        cin >> a>> b;
        int x = min(a,b);
        x++;
        int y = max(a,b);
        ll sum = 0;
        for (int i = x; i < y; i++)
        {
            if(i%2 == 1){
                sum += i;
            }
        }
        cout << sum << endl;
        
    }
}