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

  printf("\n\n- Square root");
  double a;
  printf("\nEnter the value for a: ");
  scanf("%lf", &a);
  printf("| The square root of %.2f is %.2f", a, sqrt(a));
  printf("\n| The cube root of %.2f is %.2f", a, cbrt(a));

  printf("\n\n- Absolute value");
  float b;
  printf("\nEnter the real value for b: ");
  scanf("%f", &b);
  printf("| The absolute value of %.2f is %.2f", b, abs(b));
  double c;
  printf("\nEnter the real value for c: ");
  scanf("%lf", &c);
  printf("| The absolute value of %.2f is %.2f", c, fabs(c));

  printf("\n\n- Rounding and number decomposition");
  double d;
  printf("\nEnter the real value for d: ");
  scanf("%lf", &d);
  printf("| Round up: d = %d", (int)ceil(d));
  printf("\n| Round down: d = %d", (int)floor(d));
  printf("\n| Round to the nearest: d = %d", (int)round(d));
  printf("\n| Truncate the fractional part: d = %d", (int)trunc(d));

  printf("\n\n- Value comparison");
  double x, y, z, t, u;
  printf("\nEnter the value for x, y, z, t, u: ");
  scanf("%lf %lf %lf %lf %lf", &x, &y, &z, &t, &u);
  printf("| The maximum: %.2f", fmax(x, fmax(y, fmax(z, fmax(t, u)))));
  printf("\n| The minimum: %.2f", fmin(x, fmin(y, fmin(z, fmin(t, u)))));

  return 0;
}