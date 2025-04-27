#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define d double
#define mx 1000000
#define mod 1000000007
#define pi acos(-1)
#define inf 1e18
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair

void sieveE(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i*i <= n; i++){
        if(prime[i]==true){
            for(int j = i*i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
    for (int i = 0; i <= n; i++){
        if(prime[i]){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    fast;
    int n;
    cin >> n;
    sieveE(n);
    return 0;
}