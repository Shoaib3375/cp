#include <stdio.h>
#include<math.h>
int main()
{
  int A, B, temp;
  scanf("%d %d", &A, &B);
  while (B != 0)
  {
    temp = B;
    B = A % B;
    A = temp;
  }
  printf("%d", A);
}