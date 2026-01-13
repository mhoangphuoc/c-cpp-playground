// Solve Quadratic Equation
#include <stdio.h>
#include <math.h>

int main()
{
  printf("The equation: ax^2 + bx + c = 0\n");
  double delta, a, b, c, x, x1, x2;
  printf("Enter the value for a: ");
  scanf("%lf", &a);
  printf("Enter the value for b: ");
  scanf("%lf", &b);
  printf("Enter the value for c: ");
  scanf("%lf", &c);

  printf("| a = %.2lf\tb = %.2lf\tc = %.2lf", a, b, c);
  if (a == 0) // (solve linear equation)
  {
    if (b != 0) // b != 0
    {
      x = -c / b;
      if (x == 0)
      {
        x = fabs(x); // Display 'x = 0.00' instead of 'x = -0.00'
      }
      printf("\n=> The equation has a unique solution: x = %.2lf", x);
    }
    else if (c == 0) // b == 0 && c == 0
    {
      printf("\n=> The equation has infinitely many solutions.");
    }
    else // b == 0 && c != 0
    {
      printf("\n=> The equation has no solution.");
    }
  }
  else
  {
    delta = b * b - 4 * a * c;
    printf("\n=> Delta = %.2lf", delta);

    if (delta < 0)
    {
      printf("\n=> The equation has no real roots.");
    }
    else if (delta == 0)
    {
      x = -b / (2 * a);
      if (x == 0)
      {
        x = fabs(x); // Display 'x = 0.00' instead of 'x = -0.00'
      }

      printf("\n=> The equation has a double root: x1 = x2 = %.2lf", x);
    }
    else // delta > 0
    {
      x1 = (-b + sqrt(delta)) / (2 * a);
      if (x1 == 0)
      {
        x1 = fabs(x1); // Display 'x = 0.00' instead of 'x = -0.00'
      }
      x2 = (-b - sqrt(delta)) / (2 * a);
      if (x2 == 0)
      {
        x2 = fabs(x2); // Display 'x = 0.00' instead of 'x = -0.00'
      }
      printf("\n=> The equation has two distinct real roots: x1 = %.2lf ; x2 = %.2lf", x1, x2);
    }
  }

  return 0;
}