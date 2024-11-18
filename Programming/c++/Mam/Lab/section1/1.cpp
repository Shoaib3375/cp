#include<stdio.h>
int main(){
    int l,w;
    scanf("%d",&l);
    scanf("%d",&w);
    int area = l*w;
    int perimeter = 2*(l+w);
    printf("Area of Rectangle: %d\n",area);
    printf("Perimeter of Rectangle: %d",perimeter);
}


