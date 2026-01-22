// Comparison/Relational Operators
#include "stdio.h"

int main()
{
  int a, b;
  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);

  printf("| %d is equal to %d => %d", a, b, a == b);
  printf("\n| %d is greater than %d => %d", a, b, a > b);
  printf("\n| %d is less than %d => %d", a, b, a < b);
  printf("\n| %d is not equal to %d => %d", a, b, a != b);
  printf("\n| %d is greater than or equal to %d => %d", a, b, a >= b);
  printf("\n| %d is less than or equal to %d => %d", a, b, a <= b);

  return 0;
}
