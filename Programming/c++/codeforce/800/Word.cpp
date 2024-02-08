#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int main()
{
    string s;
    cin >> s;
    int low = 0;
    int upp = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            low++;
        }
        else
        {
            upp++;
        }
    }
    if (low >= upp)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s << endl;
}