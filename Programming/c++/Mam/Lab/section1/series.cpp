#include <math.h>
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
    int i;
    float sums = 0.0, temp;
    for (i = 1; i <= n; ++i) {
        temp = 1 / pow(i, i);
        sums += temp; // sum = 1 + 
    }
    printf("%.5f", sums);
    return 0;
}