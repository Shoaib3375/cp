#include <bits/stdc++.h>
using namespace std;

// Find the peak index in a mountain array
int peakIndexInMountainArray(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int d = arr[1] - arr[0];
    for (int i = 2; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] != d)
            return false;
    }
    return true;
}

int main()
{
}
