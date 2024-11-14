#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mx = 2e5+123;
int arr[mx];
ll psum[mx];

int main(){

    int n, q;
    cin >> n >> q;
 
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <=n; i++)
    {
        psum[i] = psum[i-1] + arr[i];
    }
    while (q--)
    {
        int mn = 0;
        int a,b;
        cin>> a>>b;
        for (int i =a; i <=b; i++)
        {
            mn = min(psum[i],psum[i-1]);

        }
        cout << mn<<endl;
        

    }
    
    
    
}
