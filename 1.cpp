#include <bits/stdc++.h>
using namespace std;
const int mx = 100013;
int a[mx];
int b[mx];
int freq[mx];
#define ll long long
int main() {
    int i,n;
    ll a[100];
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(i=n;i!=0;i--)
    {
        cout<< a[i]<<" ";
    }
}