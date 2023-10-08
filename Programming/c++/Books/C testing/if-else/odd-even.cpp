#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a % 2)
    {
        printf("%d is event\n", a);
    }
    else
    {
        printf("%d is Odd");
    }
    return 0;
}