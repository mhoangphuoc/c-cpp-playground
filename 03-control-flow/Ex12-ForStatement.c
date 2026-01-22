// Iteration/Loop - For Statement
#include <stdio.h>
int main()
{
   // Declare variable
   int a, b;

   // Input
   printf("Enter the integer value for a: ");
   if (scanf("%d", &a) != 1)
   {
      printf("Invalid value!");
      return 0;
   }
   printf("Enter the integer value for b: ");
   if (scanf("%d", &b) != 1)
   {
      printf("Invalid value!");
      return 0;
   }

   // Perform
   if (a == b)
   {
      printf("Try another value for a or b!");
      return 0;
   }
   else
   {
      printf("Display from smaller to larger: \n");
      if (a < b)
      {
         /* Since 'a' and 'b' are declared outside the if statement.
         -> Use 'a' and 'b' directly in the loop condition, the increment expression would be 'a++'.
         -> Modifies the value of 'a' -> This would affect the logic of the following control structures.
         -> Use 'i' as a temporary variable for counting. */
         for (int i = a; i <= b; i++)
         {
            printf("%d ", i);
         }
      }
      else
      {
         for (int i = b; i <= a; i++)
         {
            printf("%d ", i);
         }
      }

      printf("\n-------------------------\n");
      printf("Display from a to b: \n");
      if (a < b)
      {
         /* Since there are no further control structures below and the program ends here.
         -> No longer need to preserve the original values for 'a' and 'b'.
         -> Can directly use 'a' as the loop variable and apply 'a++'. */
         for (; a <= b; a++)
         {
            printf("%d ", a);
         }
      }
      else
      {
         for (; a >= b; a--)
         {
            printf("%d ", a);
         }
      }
   }

   return 0;
}