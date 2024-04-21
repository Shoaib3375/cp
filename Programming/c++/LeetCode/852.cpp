#include <iostream>
#include <vector>
using namespace std;

// Find the peak index in a mountain array
int peakIndexInMountainArray(vector<int> &arr)
{
    int n = arr.size();
    int left = 0, right = n - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] < arr[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int peakIndex = peakIndexInMountainArray(arr);
    cout << peakIndex << endl;
    return 0;
}
