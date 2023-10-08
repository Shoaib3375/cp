#include <stdio.h>
#include <math.h>
int main()
{
    double r, area, pi;
    scanf("%lf", &r);
    pi = acos(-1.);
    area = pi * r * r;
    printf("%lf\n", area);
}