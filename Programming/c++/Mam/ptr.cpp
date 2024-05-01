#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int *ptr;
    int size;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array using pointers
    printf("Enter elements of the array:\n");
    for (ptr = arr; ptr < arr + size; ptr++)
    {
        scanf("%d", ptr);
    }

    // Print elements of the array in reverse order using pointers
    printf("Elements of the array in reverse order:\n");
    for (ptr = arr + size - 1; ptr >= arr; ptr--)
    {
        printf("%d ", *ptr);
    }

    return 0;
}
