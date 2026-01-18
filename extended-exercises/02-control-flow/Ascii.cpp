// The ASCII Table and Characters Conversion
#include <stdio.h>
#include <conio.h>

int main()
{
menu:
   printf("| MENU =========\n");
   printf("0. Exit.\n");
   printf("1. Enter a decimal number to print its corresponding character.\n");
   printf("2. Enter two decimal numbers to print the corresponding sequence of characters between them.\n");
   printf("3. Enter a character to print its corresponding decimal value.\n");

   int n;
again:
   printf("---- Choose an option: ");
   if (scanf("%d", &n) != 1)
   {
      printf("| Invalid input!");
      return 0;
   }

   switch (n)
   {
      int a, b, choose;
      char c;
   case 0:
      return 0;
   case 1:
   // menu.1: input
   again1:
      printf("| Enter an integer value (33-126): ");
      if (scanf("%d", &a) != 1)
      {
         printf("Invalid input!");
         return 0;
      }
      // menu.1: perform
      if (a < 33 || a > 126)
         goto again1;
      else
      {
         printf("| %d - '%c'\n", a, a);
      }
   viewQ1:
      printf("*Press 0 then Enter\t| Exit the program.\n");
      printf("*Press 1 then Enter\t| View the menu.\n");
      printf("*Press 2 then Enter\t| Try again.\n");
      if (scanf("%d", &choose) != 1)
      {
         printf("Invalid input!");
         return 0;
      }
      switch (choose)
      {
      case 1:
         printf("----------------\n");
         goto menu;
      case 0:
         return 0;
      case 2:
         goto again1;
      default:
         goto viewQ1;
      }

   case 2:
   // menu.2: input
   again21:
      printf("| Enter an integer value (33-126): ");
      if (scanf("%d", &a) != 1)
      {
         printf("Invalid input!");
         return 0;
      }
      if (a < 33 || a > 126)
         goto again21;
   again22:
      printf("| Enter an integer value (33-126): ");
      if (scanf("%d", &b) != 1)
      {
         printf("Invalid input!");
         return 0;
      }
      if (b < 33 || b > 126)
         goto again22;
      // menu.2: perform
      if (a <= b)
      {
         for (; a <= b; a++)
            printf("| %d - '%c'\n", a, a);
      }
      else
      {
         for (; a >= b; a--)
            printf("| %d - '%c'\n", a, a);
      }
   viewQ2:
      printf("*Press 0 then Enter\t| Exit the program.\n");
      printf("*Press 1 then Enter\t| View the menu.\n");
      printf("*Press 2 then Enter\t| Try again.\n");
      if (scanf("%d", &choose) != 1)
      {
         printf("Invalid input!");
         return 0;
      }
      switch (choose)
      {
      case 1:
         printf("----------------\n");
         goto menu;
      case 0:
         return 0;
      case 2:
         goto again21;
      default:
         goto viewQ2;
      }
   case 3:
   // menu.3: input
   again3:
      printf("| Enter a single character: ");
      if (scanf(" %c", &c) != 1)
      {
         printf("Invalid input!");
         return 0;
      }
      if ((int)c < 33 || (int)c > 126)
         goto again3;
      // menu.3: perform
      printf("| '%c' - %d\n", c, c);
   viewQ3:
      printf("*Press 0 then Enter\t| Exit the program.\n");
      printf("*Press 1 then Enter\t| View the menu.\n");
      printf("*Press 2 then Enter\t| Try again.\n");
      if (scanf("%d", &choose) != 1)
      {
         printf("Invalid input!");
         return 0;
      }
      switch (choose)
      {
      case 1:
         printf("----------------\n");
         goto menu;
      case 0:
         return 0;
      case 2:
         goto again3;
      default:
         goto viewQ3;
      }
   default:
      goto again;
   }

   return 0;
}