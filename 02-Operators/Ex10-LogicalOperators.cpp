// Logical Operators
#include <stdio.h>

int main()
{
  printf("=== Logical Operators ===\n");
  int a = 5 > 2;     // TRUE = 1
  int b = 10 >= 99;  // FALSE = 0
  int c = 12 < 45;   // TRUE = 1
  int d = 25 >= 100; // FALSE = 0
  printf("%d && %d = %d\n", a, b, a && b);
  printf("%d && %d = %d\n", a, c, a && c);
  printf("%d && %d = %d\n", a, d, a && d);
  printf("%d && %d = %d\n", b, c, b && c);
  printf("%d && %d = %d\n", b, d, b && d);
  printf("%d && %d = %d\n", c, d, c && d);
  printf("%d && %d && %d && %d = %d\n", a, b, c, d, a && b && c && d);

  printf("%d || %d = %d\n", a, b, a || b);
  printf("%d || %d = %d\n", a, c, a || c);
  printf("%d || %d = %d\n", a, d, a || d);
  printf("%d || %d = %d\n", b, c, b || c);
  printf("%d || %d = %d\n", b, d, b || d);
  printf("%d || %d = %d\n", c, d, c || d);
  printf("%d || %d || %d || %d = %d\n", a, b, c, d, a || b || c || d);
  printf("!%d = %d\n", a, !a);
  printf("!%d = %d\n", b, !b);
  printf("!%d = %d\n", c, !c);
  printf("!%d = %d", d, !d);

  return 0;
}