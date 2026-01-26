// 01 - 06: KHOẢNG CÁCH EUCLID
#include <stdio.h>
#include <math.h>
// Main function
int main()
{
   // Variable declarations
   int x1, y1, x2, y2;
   double result;
   // Input
   scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
   // Processing
   result = hypot(x2 - x1, y2 - y1);
   // Output
   printf("%.2f", result);
   return 0;
}