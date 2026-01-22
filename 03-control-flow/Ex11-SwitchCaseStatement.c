// Switch Case Statement
#include <stdio.h>

// Enter a number from 1 to 7 and display the corresponding day of the week (Sunday to Saturday)
int main()
{
   int n;
   printf("Enter the value for n (1-7): ");
   scanf("%d", &n);

   switch (n)
   {
   case 1:
      printf("Sunday");
      break;
   case 2:
      printf("Monday");
      break;
   case 3:
      printf("Tuesday");
      break;
   case 4:
      printf("Wednesday");
      break;
   case 5:
      printf("Thursday");
      break;
   case 6:
      printf("Friday");
      break;
   case 7:
      printf("Saturday");
      break;
   default:
      printf("Invalid input value!");
      break;
   }
   return 0;
}