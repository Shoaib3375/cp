#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 1e4 + 123;
ll arr[mx];
int main()
{
    int lim = 1e4;
    for (ll i = 1; i <=lim; i++)
    {
        arr[i] = i *i*i;
    }
    int t;
    cin>> t;
    while (t--)
    {
        ll n;
        cin>> n;
        bool yes = false;
        for (ll b = 1; b <=lim; b++)
        {
            ll aq = n - ( b* b*b);
            if(aq<1) break;
            bool isExist = binary_search(arr+1,arr+lim,aq);
            if(isExist){
                yes = true;
                break;
            }
        }
        if(yes){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        
    }
    
    
}
