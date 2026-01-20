// Iteration/Loop - While Statement
#include <stdio.h>

int main()
{
   // Variable declarations
   int n, i = 0, sum = 0;

   // Input
   printf("Enter the integer value for n: ");
   scanf("%d", &n);

   // Processing
   while (i <= n)
   {
      sum += i;
      i++;
   }

   // Output
   printf("Sum from 0 to n: %d", sum);

   return 0;
}