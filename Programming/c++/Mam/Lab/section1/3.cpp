#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c; 
    scanf("%f %f %f",&a,&b,&c);
    float perimeter = a + b + c;
    float s = perimeter / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Perimeter of Triangle: %f\n",perimeter);
    printf("Area of Triangle: %f\n",area);

    
    return 0;
}
