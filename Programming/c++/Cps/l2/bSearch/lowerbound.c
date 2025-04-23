#include <stdio.h>

int lowerBound(int arr[], int size, int x) {
    int left = 0, right = size;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid;
    }
    return left;  
}

int main() {
    int arr[] = {1, 2, 4, 4, 5, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

    int index = lowerBound(arr, size, x);
    if (index < size)
        printf("Lower bound of %d is %d at index %d\n", x, arr[index], index);
    else
        printf("Lower bound of %d does not exist in the array.\n", x);

    return 0;
}
