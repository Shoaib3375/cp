#include<stdio.h>
int main()
{
    int i=1;
    start:
    printf("%d\n",i);
    i=i+1;
    if(i<=100)
    goto start;
    return 0;
}