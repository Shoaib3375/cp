#include <stdio.h>

int main() {
    const int ARRAY_SIZE = 6;
    int ageA[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; ++i) {

        int age;
        scanf("%d", &age);
        if (age < 0 || age > 19) {
            --i;
        } else {
            ageA[i] = age;
        }
    }
    printf("Age array: ");
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("%d ", ageA[i]);
    }
    printf("\n");

    return 0;
}
