#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main()
{
    int t, n;
    cin >> t >> n;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin>> a[i];
    }
    int next = 0;
    int nval = a[n-1];
    for (int i = 0; i < t; i++)
    {
        if(a[i] >= nval && a[i]){
            next++;
        }
    }
    
    cout << next<<endl;
}