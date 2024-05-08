#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    // for (auto &&u : s)
    // {
    //     cout << u<<" ";
    // }
    if (n == s.size())
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}