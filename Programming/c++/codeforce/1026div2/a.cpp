#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n; 

        int ocnt = 0;
        int ecnt = 0;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;

            if (x % 2 == 0)
                ecnt++; 
            else
                ocnt++;
        }

        
        cout << min(ocnt, ecnt) << endl;
    }

    return 0;
}
