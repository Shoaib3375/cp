#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const ll mx = 10e9 + 123;
char grid[101][101];
int x[123], y[123];
int main()
{
    string s;
    int t, n;
    cin >> t;
    while (t--)
    {

        cin >> n >> s;
        int a = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '*' && s[i + 1] == '*')
            {
                break;
            }else if (s[i]=='@')
            {
                a++;
            }
            
        }
        cout << a<<endl;
    }
}