#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int x, i;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) 
    {
        if (arr[i] == x)
        {
            printf("Element %d found at index %d\n", x, i);
            break;
        }
    }

    if (i == n)
        printf("Element %d not found in the array\n", x);

    return 0;
}
