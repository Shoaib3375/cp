#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int main() {
    // Step 1: Declare a pointer
    int *ptr;

    // Step 2: Initialize an integer variable
    int var = 42;

    // Step 3: Assign the address of 'var' to the pointer
    ptr = &var;

    // Print information
    printf("Address of var: %p\n", &var);
    printf("Value of ptr (address of var): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n\n", *ptr);

    // Step 4: Allocate memory dynamically
    ptr = (int *)malloc(sizeof(int)); // Allocate memory for an integer
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error code
    }

    // Step 5: Store a value in the dynamically allocated memory
    *ptr = 100;

    // Print information about dynamically allocated memory
    printf("Address of dynamically allocated memory: %p\n", ptr);
    printf("Value stored in dynamically allocated memory: %d\n", *ptr);

    // Step 6: Free the allocated memory
    free(ptr);

    // Optional: Nullify the pointer after freeing
    ptr = NULL;

    return 0;
}
