#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    char ch;


    f1 = fopen("source.txt", "r");
    if (f1 == NULL)
    {
        printf("No data Available\n");
        return 1;
    }


    f2 = fopen("target.txt", "a");
    if (f2 == NULL)
    {
        printf("Error opening target file \n");
        fclose(f1);
        return 1;
    }
    while ((ch = fgetc(f1)) != EOF)
    {
        fputc(ch, f2);
    }

    printf("\nFile append successful\n");

    fclose(f1);
    fclose(f2);

    return 0;
}
