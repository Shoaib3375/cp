#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], temp[50], substr[50];
    int choice, len1, len2;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("\nMenu:");
    printf("\n1. Find length of strings");
    printf("\n2. Concatenate strings");
    printf("\n3. Compare strings");
    printf("\n4. Extract substring");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            len1 = strlen(str1) - 1; // Excluding the newline character
            len2 = strlen(str2) - 1; // Excluding the newline character
            printf("Length of string 1: %d\n", len1);
            printf("Length of string 2: %d\n", len2);
            break;
        case 2:
            strcpy(temp, str1);
            strcat(temp, str2);
            printf("Concatenated string: %s", temp);
            break;
        case 3:
            if(strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;
        case 4:
            printf("Enter the position to start extraction: ");
            int pos;
            scanf("%d", &pos);
            printf("Enter the length of substring: ");
            int length;
            scanf("%d", &length);
            strncpy(substr, str1 + pos, length);
            substr[length] = '\0'; // Null-terminate the substring
            printf("Substring: %s\n", substr);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
