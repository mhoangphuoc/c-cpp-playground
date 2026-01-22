// The ASCII Table and Characters Conversion
#include <stdio.h>

// Function declarations
int menu(int &n);
int eOption(int &n);

// Main function
int main()
{
   // Variable declarations
   int n, a, b;
   char c;

// Input
menu:
   menu(n);

   // Processing
   switch (n)
   {
   case 0:
      printf("Exit!");
      return 0;
   case 1:
      do
      {
         do
         {
            printf("-[1]- Enter an integer value (33 - 126): ");
            if (scanf("%d", &a) != 1)
            {
               printf("| Invalid input!");
               return 0;
            }
         } while (a < 33 || a > 126);
         printf("| %d - '%c'\n", a, a);
         eOption(n);
      } while (n == 1);
      if (n == 2)
      {
         goto menu;
      }
      printf("Exit!");
      return 0;

   case 2:
      do
      {
         do
         {
            printf("-[2]- Enter two integer values (33 - 126): ");
            if (scanf("%d%d", &a, &b) != 2)
            {
               printf("| Invalid input!");
               return 0;
            }
         } while (a < 33 || a > 126 || b < 33 || b > 126);

         if (a <= b)
         {
            for (int i = a; i <= b; i++)
            {
               printf("| %d - '%c'\n", i, i);
            }
         }
         else
         {
            for (int i = a; i >= b; i--)
            {
               printf("| %d - %c\n", i, i);
            }
         }

         eOption(n);
      } while (n == 1);
      if (n == 2)
      {
         goto menu;
      }
      printf("Exit!");
      return 0;

   case 3:
      do
      {
         printf("-[3]- Enter a character: ");
         scanf(" %c", &c);
         printf("| %c - %d\n", c, c);
         eOption(n);
      } while (n == 1);
      if (n == 2)
      {
         goto menu;
      }
      printf("Exit!");
      return 0;
   }

   // Output

   return 0;
}

// Function Definitions
int menu(int &n)
{
   printf("===========================================\n| MENU\n");
   printf("0. Exit.\n");
   printf("1. Enter a decimal number to print its corresponding character.\n");
   printf("2. Enter two decimal numbers to print the corresponding sequence of characters between them.\n");
   printf("3. Enter a character to print its corresponding decimal value.\n");
   do
   {
      printf("---- Choose an option: ");
      if (scanf("%d", &n) != 1)
      {
         printf("| Invalid input!");
         return 0;
      }
   } while (n < 0 || n > 3);
   return n;
}
int eOption(int &n)
{
   printf("---------------------\n");
   printf("0. Exit.\n1. Try again.\n2. View menu.\n");
   do
   {
      printf("---- Choose an option: ");
      if (scanf("%d", &n) != 1)
      {
         printf("| Invalid input!");
         return 0;
      }
   } while (n < 0 || n > 2);
   return n;
}