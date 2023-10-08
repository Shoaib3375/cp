#include<stdio.h>
int main()
{
    int a;
    printf("Insert a number: ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("the number is zero");
    }
    if(a>0)
    {
    printf("The number is positive\n");
    }
    if(a<0)
    {
    printf("The number is negative\n");
    }
    
    return 0;
    
}