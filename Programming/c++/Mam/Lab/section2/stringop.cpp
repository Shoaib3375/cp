#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    char b[20];
    

    fgets(a, sizeof(a), stdin);
   
    a[strcspn(a, "\n")] = '\0';


    int ln = strlen(a);
    printf("Length of string: %d\n", ln);

    for (int i = 0; i < ln; i++) {
        b[i] = a[ln - i - 1];
    }
    b[ln] = '\0';  

    printf("Reversed string: %s\n", b);


    if (strcmp(a, b) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
