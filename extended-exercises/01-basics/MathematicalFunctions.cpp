// Mathematical Functions
#include <stdio.h>
#include <math.h>

int main()
{
  printf("=== Mathematical Functions ===");

  printf("\n- Exponentiation");
  double base, exponent;
  printf("\nEnter the value for base: ");
  scanf("%lf", &base);
  printf("Enter the exponent n: ");
  scanf("%lf", &exponent);
  printf("| %.2f raised to the power of %.2f is %.2f", base, exponent, pow(base, exponent));

  printf("\n\n- Square root & Cube root");
  double a;
  printf("\nEnter the value for a: ");
  scanf("%lf", &a);
  printf("| The square root of %.2f is %.2f", a, sqrt(a));
  printf("\n| The cube root of %.2f is %.2f", a, cbrt(a));

  printf("\n\n- Absolute value");
  double b;
  printf("\nEnter the real value for b: ");
  scanf("%lf", &b);
  printf("| The absolute value of %.2f is %.2f", b, fabs(b));

  printf("\n\n- Rounding and number decomposition");
  double c;
  printf("\nEnter the real value for c: ");
  scanf("%lf", &c);
  printf("| Round up: c = %d", (int)ceil(c));
  printf("\n| Round down: c = %d", (int)floor(c));
  printf("\n| Round to the nearest: c = %d", (int)round(c));
  printf("\n| Truncate the fractional part: c = %d", (int)trunc(c));

  printf("\n\n- Value comparison");
  double x, y, z, t, u;
  printf("\nEnter the value for x, y, z, t, u: ");
  scanf("%lf %lf %lf %lf %lf", &x, &y, &z, &t, &u);
  printf("| The maximum: %.2f", fmax(x, fmax(y, fmax(z, fmax(t, u)))));
  printf("\n| The minimum: %.2f", fmin(x, fmin(y, fmin(z, fmin(t, u)))));

  return 0;
}