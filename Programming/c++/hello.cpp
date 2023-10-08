#include <stdio.h>
int main()
{
    int i, s = 1;
    for (i = 2; i <= 6; i = i + 2)
    {
        s = s * i;
    }
    printf("%d", s);
    return 0;
}