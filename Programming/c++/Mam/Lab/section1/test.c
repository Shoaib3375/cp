// #include <stdio.h>
// const float PI = 3.1416;
// int main()
// {
//     float r;
//     scanf("%f", &r);
//     printf("area: %0.2f\n",1.0* PI * (r * r));
//     printf("Cir: %0.2f",1.0*2*(PI*r));
// }
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     // if(a&1)
//     if(a%2==1){
//         printf("%d is a odd number",a);
//     }else{
//         printf("%d is a even number",a);
//     }
// }

#include <stdio.h>
#include <math.h>
typedef long long ll;
typedef float f;

int main()
{
    f a,b,c,d;
    f x, y, x1, realPart, imagPart;
    printf("Enter the values:\n");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - (4 * a * c);
    if (d > 0)
    {
        printf("Two real solutions.\n");
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        printf("Solutions: %.2f and %.2f\n", x, y);
    }
    else if (d == 0)
    {
        printf("Unique solution.\n");
        x = -b / (2 * a);
        printf("Solution: %.2f\n", x);
    }
    else
    {
        printf("Complex solutions.\n");
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Solutions: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
}