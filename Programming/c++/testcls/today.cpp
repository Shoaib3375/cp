#include<bits/stdc++.h>
using namespace std;

int main(){
    // 1 2 3, 4, 5, 6
    vector<int> vec; 
    
    for (int i = 0; i < 6; i++) {
        int n;
        cin >> n;
        vec.push_back(n);
    }
    
    for (auto &&i : vec) {
        cout << i << ' ';  
    }
    cout << endl;
    sort(vec.rbegin(), vec.rend());
    vec.pop_back();
    
    for (auto &&i : vec)
    {
        cout << i<<" ";
    }
    

    return 0;
}
