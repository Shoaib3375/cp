#include <stdio.h>
int main()
{
    char ch;
    FILE *INPUT;
    INPUT = fopen("INPUT.txt", "w");
    while ((ch = getchar()) != '\n')
        putc(ch, INPUT);
    fclose(INPUT);
    INPUT = fopen("INPUT.txt", "r");
    while ((ch = getc(INPUT)) != EOF)
        printf("%c", ch);
    fclose(INPUT);
    return 0;
}