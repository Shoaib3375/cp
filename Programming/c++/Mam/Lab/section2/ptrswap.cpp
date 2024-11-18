#include<stdio.h>
int main(){
    int x,y,aux,*p,*q;
    p = &x;
    q = &y;
    printf("Enter two swapping values:");
    scanf("%d %d",&x,&y);
    printf("Before swapping : %d %d",x,y);
    aux = *p;
    *p = *q;
    *q = aux;
    printf("\nAfter swapping: %d %d",x,y);
    return 0;
}