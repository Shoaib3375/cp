#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Input three integer numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    if((x>y)&&(x>z))
    printf("%d is the largest number",x);
    if((y>x)&&(y>z))
    printf("%d is the largest number",y);
    if((z>x)&&(z>y))
    printf("%d is the largest number",z);
    if((x==y)&&(y==z))
    printf("They are equal");
    return 0;
}