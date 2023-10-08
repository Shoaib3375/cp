#include<stdio.h>
int main()
{
    double a, b, sum;

    a = 9.5;
    b = 8.743;

    sum = a+b;

    printf("Sum is: %lf\n",sum);
    printf("Sum is: %0.0lf", sum);//Dosomik ongso print na korte chaile %0.0lf use korte hobe.

    return 0;
}