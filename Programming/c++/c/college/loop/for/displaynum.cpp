#include<stdio.h>
int main()
/*
// display five num
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}*/
/*In this program we display
definite num
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
*/

{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=+2)
    {
        printf("%d\n",i);
    }
    return 0;
}