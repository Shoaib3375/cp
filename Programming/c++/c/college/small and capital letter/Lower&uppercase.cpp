#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter:");
    scanf("%c",&ch);
    if(ch >= 'A'&&(ch<='Z'))
        printf("\nYou entered a cpital letter : %c", ch);
    else if((ch>='a')&& (ch<='z'))
        printf("\nYou entered a small letter : %c",ch);
    else
        printf("\nThe letter you entered id not a character.");
    return 0;
}
