#include<stdio.h>

 main()
{
  int a, b;

  printf("Please enter the value for a:");
  scanf("%d", &a);

  printf("\nPlease enter the value for b:");
  scanf("%d", &b);

  if (a > b)
  {
    printf("\n a is greater than b");
  }
  else if (b > a)
  {
    printf("\n b is greater than a");
  }
  else
  {
    printf("\n Both are equal");
  }
}