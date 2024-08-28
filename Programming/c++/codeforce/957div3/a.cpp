#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // vector<int> V(3);
        // cin >> V[0] >> V[1] >> V[2];

        // for (int i = 0; i < 5; i++){
        //     (*min_element(V.begin(), V.end()))++;
        // }
        // cout << V[0] * V[1] * V[2] << '\n';
        vector<int> v(3);
        cin>> v[0]>>v[1]>> v[2];
        for (int i = 0; i < 5; i++)
        {
            sort(v.begin(),v.end());
            v[0] += 1;

        }
        cout << v[0] * v[1] * v[2] << '\n';
        
    }
    return 0;
}