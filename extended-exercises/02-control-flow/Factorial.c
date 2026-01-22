// Calculate the factorial of a non-negative integer n (n>=0).
#include <stdio.h>

// Main function
int main()
{
   printf("==== Calculate The Factorial ====\n");
   // Variable declarations
   int n, result;

   // Input
   do
   {
      printf("Enter the integer value for n (>=0): ");
      if (scanf("%d", &n) != 1)
      {
         printf("| Invalid input!");
         return 0;
      }
   } while (n < 0);
   // Processing
   result = 1;
   for (int i = 1; i <= n; i++)
   {
      result *= i;
   }

   // Output
   printf("| %d! = %d", n, result);

   return 0;
}
