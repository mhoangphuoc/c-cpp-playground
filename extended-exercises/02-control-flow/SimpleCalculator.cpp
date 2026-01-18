// Simple Calculator
#include <stdio.h>
#include <math.h>

int main()
{
   // Declare variables
   double a, b, result;
   char opr; // Operator: + - * / ^ % ?

   // Input
   printf("Enter an expression (e.g., 3 + 5): \n| ");
   if (scanf("%lf %c %lf", &a, &opr, &b) != 3)
   {
      printf("Invalid input!");
      return 0;
   }
   else
   {
      // Perform calculation
      switch (opr)
      {
      case '+':
         result = a + b;
         break;
      case '-':
         result = a - b;
         break;
      case '*':
         result = a * b;
         break;
      case '/':
         if (b == 0)
         {
            printf("Invalid expression!");
            return 0;
         }
         else
         {
            result = a / b;
         }
         break;
      case '^':
         result = pow(a, b);
         break;
      case '%':
         if (b == 0)
         {
            printf("Invalid expression!");
            return 0;
         }
         else
         {
            result = ((int)round(a) % (int)round(b));
         }
         break;
      case '?':
         if (a == b)
         {
            printf("| The result: %.2lf = %.2lf", a, b);
         }
         else
         {
            printf("%.2lf %c %.2lf", a, a > b ? '>' : '<', b);
         }
         return 0;
      default:
         printf("Invalid expression!");
         return 0;
      }
      printf("| The result: %.2lf", result);
   }

   return 0;
}