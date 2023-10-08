#include <stdio.h>
int main(){
int a, b, c;
    printf("enter a b & c\n");
    scanf(" %d %d %d",&a, &b, &c);
    float sum , avg;
    sum = a + b + c;
    avg  = sum / 3;
    printf("%f", avg);

}