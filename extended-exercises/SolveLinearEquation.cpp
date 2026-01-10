// Solve A Linear Equation
#include <stdio.h>

int main()
{
  // Print the title to the console
  printf("=== Solve a linear equation of the form: ax + b = 0 ===");
  // declare variables
  double a, b, x;
  // Input values
  printf("\nEnter the value of a (a must not be 0): ");
  scanf("%lf", &a);
  printf("Enter the value of b: ");
  scanf("%lf", &b);
  // Solve the equation
  x = -b / a;
  // Display result
  printf("| %.2lfx + %.2lf = 0 => x = %.2lf", a, b, x);

  return 0;
}