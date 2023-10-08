// Use While loop

#include <stdio.h>
int main()
{
    int i = 9, n, sum = 0;

    printf("Enter last numbrer ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i; // Love you  :*
        i = i + 9;
    }
    printf("%d", sum);
    getchar();
}
