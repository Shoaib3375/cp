#include <stdio.h>

// Function to print the word representation of a two-digit number
void printNumberInWords(int num) {
    if (num < 20 || num > 99) {
        printf("Invalid input: Enter an integer between 20 and 99.\n");
        return;
    }

    char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    int tensPlace = num / 10;
    int onesPlace = num % 10;

    switch (tensPlace) {
        case 0:
            break; 
        case 1:
            printf("%s", teens[onesPlace]);
            return; 
        default:
            printf("%s", tens[tensPlace]);
    }

    // Switch statement for ones place
    switch (onesPlace) {
        case 0:
            break; 
        default:
            printf(" %s", ones[onesPlace]);
    }
}
int main() {
    int n, num;
    printf("Enter the number of times to repeat: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        printf("Enter an integer [20-99]: ");
        scanf("%d", &num);

        printf("In words: ");
        printNumberInWords(num);

        printf("\n");
    }

    return 0;
}
