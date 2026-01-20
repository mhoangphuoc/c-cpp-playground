// Given two integers a and b, find their greatest common divisor (GCD).
#include <stdio.h>

// Main function
int main()
{
   printf("=== Find the greatest common divisor (GCD) of two integers ===");

   // Method 1: Euclidean Algorithm (Subtraction Method)
   printf("\n-----------Method 1----------\n");
   //--- Variable declarations
   int a, b, gcd;
   //--- Input
   printf("Enter the integer value for a: ");
   scanf("%d", &a);
   printf("Enter the integer value for b: ");
   scanf("%d", &b);
   //--- Processing
   if (a == 0 || b == 0)
      gcd = a + b;
   else
   {
      while (a != b)
      {
         if (a > b)
         {
            a -= b;
         }
         else
         {
            b -= a;
         }
      }
      gcd = a;
   }
   //--- Output
   printf("| GCD = %d", gcd);

   //--- Method 2: Euclidean Algorithm (Modulo Method)
   printf("\n-----------Method 2----------\n");
   //--- Variable declarations
   int a2, b2, gcd2;
   //--- Input
   printf("Enter the integer value for a2: ");
   scanf("%d", &a2);
   printf("Enter the integer value for b2: ");
   scanf("%d", &b2);
   //--- Processing
   while (b2 != 0)
   {
      int r = a2 % b2;
      a2 = b2;
      b2 = r;
   }
   gcd2 = a2;
   //--- Output
   printf("| GCD = %d", gcd2);

   return 0;
}
// Note: The modulo-based Euclidean algorithm is more efficient than the subtraction-based method.