#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,perimeter,area;
    printf("Enter");
    scanf("%f %f %f",&a, &b, &c);
    perimeter = a+b+c;
    s = perimeter / 2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area and meri  %0.2f and %.2f",area,perimeter);
}