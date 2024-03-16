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
    int n;
    cin>> n;
    int count = 0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j <=n; j++)
        {
            for (int k = j; k <=n; k++)
            {
                if(i*i + j*j == k*k){
                    count ++;
                }
            }   
        }
    }
    cout << count<<endl;
    
    
}
