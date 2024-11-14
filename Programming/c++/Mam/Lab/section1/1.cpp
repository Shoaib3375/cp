#include <stdio.h>
#include <math.h>
int main()
{
    // float a, b, c, s, area, perimeter;
    // scanf("%f %f %f", &a, &b, &c);
    // perimeter = a + b + c;
    // s = (a + b + c) / 2;
    //     area = sqrt(s * (s - a) * (s - b) * (s - c));
    // printf("%.2f Perimeter of triangle", perimeter);

    // printf("\nArea of triangle: %.2f\n", area);

    // return 0;

    int l, w;
    scanf("%d %d ", &l, &w);
    printf("perimeter:%d", 2 * (l + w));
    printf("Area:%d", l * w);
    return 0;
}
