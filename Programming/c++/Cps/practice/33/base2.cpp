#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
    int lim = 64;
     ull ans= 0;
    for (int i = 0; i < 64; i++)
    {
        int n;
        cin>> n;
        ans += n<<i;
    }
    cout << ans<<'\n';
    return 0;
    
}