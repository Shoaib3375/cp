#include<bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int sum = 0;
        cin >> n;
        sum+= n % 10;
        sum+= n / 10000;

        cout << "Sum = "<<sum<< endl;
    }
    return 0;
}

