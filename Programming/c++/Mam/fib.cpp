#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers you want: ");
    scanf("%d", &n);
    
    // Manually set the first two Fibonacci numbers
    int fib1 = 0;
    int fib2 = 1;
    
    printf("First %d Fibonacci numbers:\n", n);
    printf("%d\n", fib1); // Print the first Fibonacci number
    printf("%d\n", fib2); // Print the second Fibonacci number
    
    // Generate and print the remaining Fibonacci numbers using loops
    for (int i = 2; i < n; i++) {
        int fib = fib1 + fib2;
        printf("%d\n", fib);
        fib1 = fib2;
        fib2 = fib;
    }
    
    return 0;
}
