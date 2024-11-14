#include <stdio.h>
const float PI = 3.1416;
int main()
{
    float r;
    scanf("%f", &r);
    printf("area: %0.2f\n",1.0* PI * (r * r));
    printf("Cir: %0.2f",1.0*2*(PI*r));
}