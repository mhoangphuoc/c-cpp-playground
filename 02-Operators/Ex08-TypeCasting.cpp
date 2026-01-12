// Type Casting
#include <stdio.h>
int main()
{
  printf("=== Type Casting ===");
  // Declare variables
  int a, b;

  // Input values
  printf("\nEnter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);

  // Calculation
  float result = a / b;
  float result2 = (float)a / b;

  // Display result
  printf("| result:\t%d\t/\t%d\t=\t%.2f", a, b, result);     // Although 'result' is a float, 'a' and 'b' are not type-cast, so 'int / int' is performed -> result is the integer part of 'a / b'
  printf("\n| result2:\t%d\t/\t%d\t=\t%.2f", a, b, result2); // 'a' is type-cast to float, so 'float / int' is performed -> result2 is the arithmetic (floating-point) result of 'a / b'

  return 0;
}