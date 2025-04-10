#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    int arr[n+2] = {0};

    for(int i = 1; i <= n; i++){
        int v;
        cin >> v;

        arr[i] += v;
        arr[i+1] -= v;
    }

    while(q--){
        int l, r, x;
        cin >> l >> r >> x;

        arr[l] += x;
        arr[r+1] -= x;
    }

    for(int i = 1; i <= n; i++){
        arr[i] += arr[i-1];
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
