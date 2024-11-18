#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("INPUT", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    //
    // (ch = getchar()) != EOF
    while ((ch = getchar()) != EOF) {
        putc(ch, file);
    }
    fclose(file);

    file = fopen("INPUT", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\nContents of the file:\n");
    
    while ((ch = getc(file)) != EOF) {
        printf("%c",ch);
    }
    fclose(file);

    return 0;
}
