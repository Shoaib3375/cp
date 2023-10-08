#include <stdio.h>
int main()
{
    int x = 100;
    int cnt = 0;
    while (x % 2 == 0)
    {
        // we could write 'x /= 2'
        x = x / 2;
        cnt++;
    }

    // finds out the highest number which is
    // power of 2 and less than 1000
    x = 1;
    // if multiplying by 2 does not exceed
    // 1000, multiple.
    while (x * 2 < 1000)
    {
        x * 2;
    }
    /* same thing using for loop. Note: there is a semicolon after teh for loop. at the end of the loop, you will find desired value in x. */
}