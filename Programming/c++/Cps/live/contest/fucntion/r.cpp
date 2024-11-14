
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>> a;
        v.push_back(a);
    }
    int l = *min_element(v.begin(), v.end());
    int r = *max_element(v.begin(), v.end());
    int s = accumulate(v.begin(), v.end(), 0);
    int total = (l + r) * (r - l + 1) / 2;
    cout << total - s << endl;
    return 0;
}
