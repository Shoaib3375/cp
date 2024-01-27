#include <stdio.h>
int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        char ch = 'a';
        for (int j = 0; j <= i; j++) {
            printf("%c", ch++);

        }
        printf(" ");
        for (int k = i; k >= 0; k--) {
            printf("%c", ch - 1);
        }
        printf("\n");
    }

    return 0;
}
