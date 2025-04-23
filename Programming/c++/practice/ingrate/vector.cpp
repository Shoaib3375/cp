#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v; 
    for(int i = 0; i<5;i++){
        int n;
        cin>> n;
        v.push_back(n);
    }
    v.pop_back();
    v.erase(v.begin()+1);
    cout << v.size()<<endl;
    

}
