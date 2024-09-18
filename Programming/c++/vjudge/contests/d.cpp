#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    int arr[100]; 
    int sum = 0;   

    cin >> n >> m; 


    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        sum += arr[b - 1];  
    }


    cout << sum << endl;

    return 0;
}
