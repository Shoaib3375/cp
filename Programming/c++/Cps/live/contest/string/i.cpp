#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    while (n--)
    {
        string ss = "";
        vector<string> v(8);
        for (auto &a : v)
        {
            cin>> a;
        }

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if(v[i][j] != '.'){
                    ss += v[i][j];
                }
            }
            
        }
        cout << ss<<endl;
        
    }
    
}