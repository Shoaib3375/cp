// In this programm i output uneven number use #While Loop..
#include<stdio.h>
int main()
{
    int digit=1,n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("The odd numbers are: ");
    while(digit<=n)
    {
        if(digit%2 !=0)
        {
            printf("%d ",digit);
        }
        ++digit;
    }
    return 0;
}