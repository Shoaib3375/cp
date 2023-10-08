
// Ai ta 7 er (ga) Number.

#include <stdio.h>
int main()
{
    int i, n, sum;
    sum = 0;
    printf("Enter last Number =");
    scanf("%d", &n);
    for (i = 9; i <= n; i = i + 9)
    {
        sum = sum + i; // Love you  :*
    }
    printf("%d", sum);
    getchar();
}