//using if
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Ener two numbers :");
    scanf("%d%d",&num1,&num2);
    if(num1 == num2)
    printf("they are equal");
    if(num1<num2)
    printf("%d is less than %d", num1,num2);
    if(num1>num2)
    printf("%d is greater then %d", num1, num2);
    getchar();
}
