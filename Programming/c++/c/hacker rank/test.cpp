#include<stdio.h>
int main()
{
    int n, m, plus, minus;
    float x, y, plusf, minusf;


    printf("");
    scanf("%d %d",&n, &m);
    printf("");
    scanf("%f %f",&x, &y);
    plus = n+m;
    minus = n-m;
    plusf = x + y;
    minusf = x - y;
    printf("%d %d\n", plus, minus);
    printf("%0.1f %0.1f\n", plusf, minusf);
    
    return 0;
}