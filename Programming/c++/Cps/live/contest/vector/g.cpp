#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int q;
    cin >> q;
    int num;
    while (q--)
    {
        int n;
        cin >> n;
        switch (n)
        {

        case 0:
            cin >> num;
            v.push_back(num);
            break;
        case 1:
            cin >> num;
            cout << v[num] << endl;
            break;
        case 2:
            v.pop_back();
            break;
        }
    }
    return 0;
}