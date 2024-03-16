#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const ll mx = 10e9 + 123;

char grid[101][101];
int main()
{
    bool flag = false;
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
    }

    int n;
    cin>> n;
    for (int i = 0; i < t; i++)
    {
        if(a[i]== n){
            cout << i<<endl;
             flag = true;
            break;
        }
    }
    if(!flag){
        cout << -1;
    }
    return 0;
    
}
