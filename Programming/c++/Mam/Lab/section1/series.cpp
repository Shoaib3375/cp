#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n); 
  
    double sums = 0.0;
    double temp;
    for (int i = 1; i <= n; ++i) {
        temp = 1 / pow(i,i);  
        sums = sums + temp;  
    }
    printf("%0.5f", sums);
    return 0;
}