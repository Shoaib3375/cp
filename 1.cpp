#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int s = 10, d = 4, whosturn = 1;
    while (!v.empty())
    {
        if (whosturn == 1)
        {
            s += v.back(); 
            v.pop_back();  
            whosturn = 2;         
        }
        else
        {
            d += v.back(); 
            v.pop_back();  
            whosturn = 1;         
        }
    }
    cout << s << " " << d << endl;

    return 0;
}
