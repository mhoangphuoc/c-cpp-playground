/* Exercise 2: Evaluate an Expression
Given the expression A(x) = x^3 + 3*x^2 + x + 1
Read a positive integer x from standard input and compute the value of the expression.
   - Input: A positive integer x (x <= 10^5). Example: 2
   - Output: The value of the expression A(x). Example: 23 */

#include <stdio.h>

// Main function
int main()
{
   // Variable declarations
   long long x, result;

   // Input
   do
   {
      if (scanf("%lld", &x) != 1)
      {
         return 1;
      }
   } while (x < 1);

   // Processing
   result = x * x * x + 3 * x * x + x + 1;

   // Output
   printf("%lld", result);

   return 0;
}
