#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    

    int fib1 = 0;
    int fib2 = 1;
    
    printf("First %d Fibonacci numbers:\n", n);
    printf("%d\n", fib1); 
    printf("%d\n", fib2);

    for (int i = 2; i < n; i++) {
        int fib = fib1 + fib2;
        printf("%d\n", fib);
        fib1 = fib2;
        fib2 = fib;
    }
    
    return 0;
}
