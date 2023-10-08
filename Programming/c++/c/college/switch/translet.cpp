#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a number(0-3): ");
    scanf("%c",&ch);
    switch(ch)
    {
        case '0':
        printf("\n Zero");
        break;
        case '1':
        printf("\n One");
        break;
        case '2':
        printf("\n Two");
        break;
        case '3':
        printf("\n three");
        break;
        default:
        printf("\n Please enter a valid number");
        

    }
}