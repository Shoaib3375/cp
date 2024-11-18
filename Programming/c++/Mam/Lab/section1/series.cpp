#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n); 
    int i;
    float sums = 0.0;
    float temp;
    for (i = 1; i <= n; ++i) {
        temp = 1 / (i^i);  
        sums = sums + temp;  
    }
    printf("%.5f", sums);
    return 0;
}