#include <bits/stdc++.h>
using namespace std;

#define int long long
int num[100000], temp[100000];

void mergesort(int lo, int hi)
{
    if (lo == hi)
        return;
    int mid = (lo + hi) / 2;

    mergesort(lo, mid);
    mergesort(mid + 1, hi);

    int i, j, k;
    for (i = lo, j = mid + 1, k = lo; k <= hi; k++)
    {
        if (i == mid + 1)
            temp[k] = num[j++];
        else if (j == hi + 1)
            temp[k] = num[i++];
        else if (num[i] < num[j])
            temp[k] = num[i++];
        else
            temp[k] = num[j++];
    }
    for (int a = lo; a <= hi; a++)
        num[a] = temp[a];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        mergesort(0, n - 1);

        for (int i = 0; i < n; i++)
        {
            cout << num[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
