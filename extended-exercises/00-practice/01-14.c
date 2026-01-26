// 01 - 14: BỘI SỐ NHỎ NHẤT
#include <stdio.h>
// Main function
int main()
{
     // Method 1:
     // Variable declarations
     int a, b, x;
     // Input
     scanf("%d%d", &a, &b);
     // Processing
     x = ((a + b - 1) / b) * b;
     // Output
     printf("%d", x);

     // Method 2:
     int x2;
     x2 = a % b == 0 ? a : b * (1 + a / b);
     printf(" %d", x2);

     // Method 3;
     int x3;
     if (a % b == 0)
          x3 = a;
     else
          x3 = b * (1 + a / b);
     printf(" %d", x3);

     return 0;
}