#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Input three integer numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    if((x>y)&&(x>z))
    printf("%d is the largest number:",x);
    if((y>x)&&(y>z))
    printf("%d is the largest number:",y);
    else
    printf("%d is the largest number",z);
    return 0;
    
}