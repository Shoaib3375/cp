// #include <stdio.h>
// const float PI = 3.1416;
// int main()
// {
//     float r;
//     scanf("%f", &r);
//     printf("area: %0.2f\n",1.0* PI * (r * r));
//     printf("Cir: %0.2f",1.0*2*(PI*r));
// }
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    // if(a&1)
    if(a%2==1){
        printf("%d is a odd number",a);
    }else{
        printf("%d is a even number",a);
    }
}