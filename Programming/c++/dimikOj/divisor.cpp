#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t, n, j, i;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cout << "Case "<<i<<": ";

        for (int j = 1;j <=n ; j++)
        {
            if (n%j == 0)
            {
                cout << j <<" ";
            }
        }
        cout << "\n";
    }
    return 0;
}


