
//Use Do while loop

#include <stdio.h>
int main()
{
    int i = 9, n, sum = 0;
    printf("Enter last number ");
    scanf("%d", &n);
    do
    {
        sum = sum + i; // Love you  :*
        i = i + 9;
    } while (i <= n);
    printf("%d", sum);
    getchar();
}
