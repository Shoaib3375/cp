#include <stdio.h>
int test_function(int x)
{
    int y = x;
    x = 2 * y;
    return (x * y);
}
int main()
{
    int x = 10, y = 20, z = 30;
    z = test_function(x);
    printf("%d %d %d\n", x, y, z);
    return 0;
}
// Result = 200; cause:- now value:  x = 10, when y = x ==> y = 10. Again x = 2 * y means = 2 * 10 ... Now y = 10 ; and x = 20. Return z = (x * y ) = 20 * 10 => 200