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
        if (n == 0)
        {
            cin >> num;
            v.push_back(num);
            break;
        }
        else if (n == 1)
        {
            cin >> num;
            cout << v[num] << endl;
            break;
        }
        else
        {
            v.pop_back();
            break;
        }
    }
    return 0;
}