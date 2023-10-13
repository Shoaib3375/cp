#include <stdio.h>
double pi = 3.14;
void my_fun()
{
    pi = 3.1416; // If this (double pi;). this pi transform "global variable to local variable" & then pi value not changed.
    return;
}
int main()
{
    printf("%lf\n", pi); // Now pi = 3.14
    my_fun();
    printf("%lf\n", pi);
    return 0;
}