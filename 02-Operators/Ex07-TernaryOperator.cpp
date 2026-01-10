// Conditional (Ternary) Operator
#include <stdio.h>

int main()
{
  // Check whether a number is even or odd
  int value;
  printf("Enter the integer value: ");
  scanf("%d", &value);
  printf("%d is %s", value, (value % 2 == 0) ? "EVEN" : "ODD");

  // Find the minimum and maximum between two numbers
  // --- Declare variables
  float a, b, min, max;
  // --- Input values
  printf("\n\nEnter the value of a: ");
  scanf("%f", &a);
  printf("Enter the value of b: ");
  scanf("%f", &b);
  // --- Calculation
  max = a > b ? a : b;
  min = a < b ? a : b;
  // --- Display result
  printf("- Maximum value: %f", max);
  printf("\n- Minimum value: %f", min);

  return 0;
}