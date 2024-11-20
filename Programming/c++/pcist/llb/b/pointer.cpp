#include <stdio.h>
int main() {
    int x, y;
    int *ptr1, *ptr2, temp;
    
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("\nBefore swapping:");
    printf("\nx = %d", x);
    printf("\ny = %d", y);
    
    ptr1 = &x;
    ptr2 = &y;
    
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\n\nAfter swapping:");
    printf("\nx = %d", x);
    printf("\ny = %d\n", y);
    
    return 0;
}
