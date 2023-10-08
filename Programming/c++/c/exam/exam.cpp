#include <stdio.h>
int main()
{
    int a, b, c, sum;
    float avr;
    printf("Please enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    avr = sum / 3;
    printf("\nAvarage is %f", avr);
    return 0;
}