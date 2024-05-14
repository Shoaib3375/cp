#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    cout << sum << endl;
}