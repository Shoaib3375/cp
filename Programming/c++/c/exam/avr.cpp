#include <stdio.h>
int main()
{
    // declare variable
    float x, y, z;
    float sum, avg;

    // take inputs
    printf("Enter three Numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    // calculate sum
    sum = x + y + z;

    // calculate average
    avg = sum / 3;

    // Output average

    printf("Average=%.2f\n", avg);

    return 0;
}