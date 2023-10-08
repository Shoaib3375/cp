#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two integer numbers: ");
    scanf("%d%d",&x,&y);
    if(x>y)
    printf("The number %d is greater than %d",x,y);
    else if(x<y)
    printf("The number %d is greater than %d",y,x);
    else
    printf("The number %d is equl to %d",x,y);
    return 0;
    
}