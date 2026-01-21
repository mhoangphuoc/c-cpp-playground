// Iteration/Loop - Do-While Statement
#include <stdio.h>

// Main function
int main()
{
   printf("==== Menu ====\n");
   // Variable Declarations
   int n;

   // Input

   // Processing
   do
   {
      printf("Press '0' then 'Enter' to Exit!\n");
      if (scanf("%d", &n) != 1)
      {
         printf("| Invalid input!");
         return 0;
      }
   } while (n != 0);

   // Output
   printf("| Exit program!");
   return 0;
}