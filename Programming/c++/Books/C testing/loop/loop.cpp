// Loop example
#include <stdio.h>
int main()
{
    // Prints from 1 to 10
    for (int i = 1; i <= 10; i++)
        printf("%d\n", i);

    // Prints from 10 to 1
    int i = 0;
    for (int i = 10; i >= 1; i--)
        printf("%d\n", i);

    printf("for loop decrement values");
    // Prints odd numbers from 1 to 10
    for (i = 1; i <= 10; i += 2)
        printf("%d\n", i);

    i = 5;

    // prints 10, 12, 14
    printf("while loop\n");
//    int i = 0;
    while (i <= 7)
    {
        printf("%d\n", i * 2);
        i++;
    }
}