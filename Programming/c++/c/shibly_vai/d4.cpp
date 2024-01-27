#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    selectionSort(arr, n);
    if (k > 0 && k <= n) {
        printf("K-th minimum: %d\n", arr[k - 1]);
        printf("K-th maximum: %d\n", arr[n - k]);
    } else {
        printf("Invalid value of k. Please enter a value between 1 and %d.\n", n);
    }

    return 0;
}
