#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> cards(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> cards[i];
    }

    for (int i = n - k; i < n; ++i)
    {
        cout << cards[i] << " ";
    }

    for (int i = 0; i < n - k; ++i)
    {
        cout << cards[i] << " ";
    }

    cout << endl;

    return 0;
}
