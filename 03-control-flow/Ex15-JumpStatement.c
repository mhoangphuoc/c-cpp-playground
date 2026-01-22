// Jump Statement
// Write a program to print all odd numbers from 1 to n (n>0) using the 'goto' and 'continute' statements.
#include <stdio.h>

// Main function
int main()
{
   // Variable declarations
   float n;

// Input
input:
   printf("Enter the value for n (> 0): ");
   if (scanf("%f", &n) != 1)
   {
      printf("| Invalid input!");
      return 0;
   }
   if (n <= 0)
      goto input;
   // Processing
   for (int i = 1; i <= n; i++)
   {
      if (i % 2 == 0)
         continue;
      // Output
      printf("%d ", i);
   }

   return 0;
}