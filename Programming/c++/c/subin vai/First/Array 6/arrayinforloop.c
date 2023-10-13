// In this programm we show that how to work for Loop in c programm.
// And show how to print all array same print

#include <stdio.h>
int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ara2[10];
    int i, j;
    for (i = 0, j = 9; i < 10; i++, j--)
    {
        ara2[j] = ara[i];
    }
    for (i = 0; i < 10; i++)
    {
        ara[i] = ara2[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}
// {
//     int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

//     int i;

//     for (i = 0; i < 10; i--)
//     {
//         printf("%d Element is: %d\n", i - 1, ara[i]);
//     }
//     return 0;
// }

// Reverse Array
