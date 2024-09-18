#include<bits/stdc++.h>
using namespace std;
const int mx = 1e6+123;
int cnt[mx];
int main(){
    int n;
    cin>> n;
    int ct = 0;
    int sum = 0;
    for (int i = 1; i*i <=n; i++)
    {
        if(n%i==0){
            cout << i << " "<< n/i<<endl;
            ct +=2;
            sum += i;
            sum += n/i;
            if(i == n/i) {
                ct--;
                sum -= n/i;
            }
        }
    }
    cout << ct<<" "<<sum<<endl;
    
    
}