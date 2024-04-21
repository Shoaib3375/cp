#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        vector<int> v(x);

        for (int i = 0; i < x; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int size = unique(v.begin(), v.end()) - v.begin();
        if (size == n)
            cout << "Good" << endl;
        else if (size > n)
            cout << "Average" << endl;
        else
            cout << "Bad" << endl;
    }
    return 0;
}