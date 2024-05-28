#include <bits/stdc++.h>
using namespace std;
const int mx = 2000 + 123;
int a[mx];
int main()
{
    int n, h;
    cin >> n >> h;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>h){
            cnt +=2;
        }else{
            cnt++;
        }
    }
    cout << cnt<<endl;
}