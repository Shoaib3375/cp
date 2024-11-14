#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n; 

    vector<int> v(n); 

    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }

    int q;
    cin >> q; 
    v.erase(v.begin() + q - 1); 

    int q1, q2;
    cin >> q1 >> q2; 
    v.erase(v.begin() + q1 - 1, v.begin() + q2 - 1); 

    cout << v.size() << endl; 

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; 
    }   
    return 0;
}