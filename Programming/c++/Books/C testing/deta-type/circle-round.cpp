#include <stdio.h>
#include <math.h>
int main()
{
    double r, pi, round;
    scanf("%lf", &r);
    pi = acos(-1);
    round = 2 * pi * r;
    printf("%lf", round);
    return 0;
}