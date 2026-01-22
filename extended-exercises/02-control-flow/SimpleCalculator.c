// Simple Calculator
#include <stdio.h>
#include <math.h>

// Function declarations
int eOption(int &n);

// Main function
int main()
{
   printf("Operatoablesr: + - * / ^ %\n");
   // Variable declarations
   double a, b, result;
   char opr; // Operator: + - * / ^ % ?
   int n;    // eOption variable

   do
   {
      // Input
      printf("=====================================\n");
      printf("Enter an expression (e.g., 3 + 5): \n| ");
      if (scanf("%lf %c %lf", &a, &opr, &b) != 3)
      {
         printf("Invalid input!");
         return 0;
      }

      // Processing
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

      // Output
      printf("| The result: %.2lf", result);
      eOption(n);
   } while (n == 1);

   printf("| Exit!");
   return 0;
}

// Function definitions
int eOption(int &n)
{
   n = 0;
   printf("\n-------------------------------------\n");
   printf("Press '1' than 'Enter' to do again or any another to close!\n");
   printf("---- Your option: ");
   if (scanf("%d", &n) != 1)
      return 0;
   return n;
}