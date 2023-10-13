// Sum is integer type data.
#include<stdio.h>
int main()
{
    int a,b,num1,num2,sum,substraction,multiaplication,divided;

    printf("Please enter a number: ");
    scanf("%d", &num1);
    printf("Please enter another number: ");
    scanf("%d",&num2);

    sum = num1+num2;
    substraction = num1-num2;
    multiaplication = num1*num2;
    divided = num1/num2;

    printf("The sum is: %d\n",sum);
    printf("The substraction is: %d\n",substraction);
    printf("The multiaplication is: %d\n",multiaplication);
    printf("The divided is: %d",divided);
    return 0;

}