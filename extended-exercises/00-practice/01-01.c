/* Exercise 1: Quotient and Remainder
Calculate and print the integer quotient and remainder of the division of two integers a and b.
- Input: Two integers a and b, where b !=0 (-10^18 <= a, b <= 10^18). (e.g., 100 5)
- Output: Print the result on a single line. (e.g., 20 0) */
#include <stdio.h>
#include <math.h>
// Main function
int main()
{
   // Variable declaration
   long long a, b, quotient, remainder;

   // Input
   do
   {
      if (scanf("%lld %lld", &a, &b) != 2)
      {
         printf("| Invalid input!");
         return 0;
      }
   } while (b == 0);

   // Processing
   quotient = a / b;
   remainder = a % b;

   // Ouput
   printf("%lld %lld", quotient, remainder);

   return 0;
}
