// C program to find the maximum number out of the three
// given numbers using if-else statement
#include <stdio.h>

int main()
{
	int A, B, C;
    int larg = 0;
	printf("Enter the numbers A, B and C: ");
	scanf("%d %d %d", &A, &B, &C);

	// finding max using compound expressions
	if (A >= B && A >= C)
		larg = A;

	else if (B >= A && B >= C)
		larg = B;

	else
		larg = C;
    printf("%d is the largest number", larg);
	return 0;
}
