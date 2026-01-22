// Solve A Linear Equation
#include <stdio.h>

int main()
{
  // Print the title to the console
  // printf("=== Solve a linear equation of the form: ax + b = 0 ===");
  // // declare variables
  // double a, b, x;
  // // Input values
  // printf("\nEnter the value of a (a must not be 0): ");
  // scanf("%lf", &a);
  // printf("Enter the value of b: ");
  // scanf("%lf", &b);
  // // Solve the equation
  // x = -b / a;
  // // Display result
  // printf("| %.2lfx + %.2lf = 0 => x = %.2lf", a, b, x);

  printf("=== Solve a linear equation of the form: ax + b = 0 using If-Else statements ===");

  double a, b, x;
  printf("\nEnter the value for a: ");
  scanf("%lf", &a);
  printf("Enter the value for b: ");
  scanf("%lf", &b);

  if (a != 0)
  {
    x = -b / a;
    if (b > 0)
    {
      printf("| The equation %.2fx + %.2f = 0 has a unique solution: x = %.2f", a, b, x);
    }
    else if (b < 0)
    {
      printf("| The equation %.2fx - %.2f = 0 has a unique solution: x = %.2f", a, -b, x);
    }
    else
    {
      printf("| The equation %.2fx + %.2f = 0 has a unique solution: x = 0", a, b);
    }
  }
  else if (b != 0) // (a == 0 && b != 0)
  {
    if (b > 0)
    {
      printf("| The equation %.2fx + %.2f = 0 has no solution.", a, b);
    }
    else
    {
      printf("| The equation %.2fx - %.2f = 0 has no solution.", a, -b);
    }
  }
  else // (a == 0 && b == 0)
  {
    printf("| The equation %.2fx + %.2f = 0 has infinitely many solutions.", a, b);
  }

  // --- Shortened version
  printf("\n\nThe equation: ax + b = 0");
  printf("\n| a = %.2f\tb = %.2f", a, b);
  if (a != 0)
  {
    x = -b / a;
    printf("\t-> x = %.2f", x);
  }
  else if (b == 0) // a == 0 && b == 0
  {
    printf("\t-> The equation has infinitely many solutions.");
  }
  else // a == 0 && b != 0
  {
    printf("\t-> The equation has no solution.");
  }

  return 0;
}