#include <stdio.h>
const double PI = 3.1416;
int main()
{
    double r;
    scanf("%lf", &r);
    double area =PI * (r*r);
    double cir = 2*(PI*r);

    printf("%0.2lf\n",area);
    printf("%0.2lf\n",cir);

}