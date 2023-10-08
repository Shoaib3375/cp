#include <stdio.h>
int main()
/*
{
    int i=1;
    while(i<=5)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
*/
{
    int n, i;
    i = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i++);
        i++;
    }
    return 0;
}