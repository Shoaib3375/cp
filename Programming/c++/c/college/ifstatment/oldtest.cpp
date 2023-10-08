#include<stdio.h>
int main()
{
    int Age;
    printf("Please enter yout age: ");
    scanf("%d", &Age);
    if(Age>0 && Age<=12)
    printf("\nYou are a child.");
    if(Age>12 && Age<=19)
    printf("\nYou are a boy/girl.");
    return 0;
}