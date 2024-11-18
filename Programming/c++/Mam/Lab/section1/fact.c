#include <stdio.h>
int main()
{
    int n; // n= 5;
    scanf("%d", &n);
    int fact = 1;
    if (n == 0)
    {
        fact = 1;
    }else{
        for (int i =1; i <=n; i++)
        {
            fact = fact * i;
        }   
    }
    printf("%d",fact);
}