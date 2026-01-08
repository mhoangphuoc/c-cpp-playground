// Data Types and Variable Declaration in C
#include "stdio.h"

int main()
{
  // Character data type
  char a = 'A'; // Assign character 'A' to variable 'a'

  // Integer data types: short < int < long < long long
  int x1 = 10; // standart integer type, most commonly used
  int x2 = -5;
  unsigned int x3 = 10;              // unsigned int: stores only non-nagative values (0 and positive), increasing the positive range
  short x4 = 100;                    // small range integer
  long x5 = 1000000;                 // large range integer
  long long x6 = 1000000000000000LL; // very large range integer

  // Floating point data types
  float y1 = 214.24f;              // precision up to 6-7 decimal digits
  double y2 = 3.1415926535;        // higher precision than 'float' (~15 decimal digits) -> Default choice for most cases
  long double y3 = 21.12412412511; // even higher precision than 'double'

  return 0;
}
