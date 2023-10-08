#include<stdio.h>
int main()
/*
{
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=5);
    return 0;
}
*/
{
    int n,i;
    i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
    return 0;
}