//Sum in double type data..
#include<stdio.h>
int main()
{
    double a,b,num1,num2,sum,substraction,multiaplication,divided;

    printf("Please enter a number: ");
    scanf("%lf", &num1);
    printf("Please enter another number: ");
    scanf("%lf",&num2);

    sum = num1+num2;
    substraction = num1-num2;
    multiaplication = num1*num2;
    divided = num1/num2;

    printf("The sum is: %lf\n",sum);
    printf("The substraction is: %lf\n",substraction);
    printf("The multiaplication is: %lf\n",multiaplication);
    printf("The divided is: %lf",divided);
    return 0;

}