#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch >= 'A')&&(ch<='Z'))
    printf("\nYou entered a capital letter : %c",ch);
    else if((ch >='a')&&(ch<'z'))
    printf("\nYou entered a small letter: %c",ch);
    else
    printf("\nThe letter you entered is not a character.");
    return 0;
}