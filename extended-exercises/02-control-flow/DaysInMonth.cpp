// Write a program to find the number of days in a given month and year
#include <stdio.h>

int main()
{
   int month, year;
   printf("=== Number of days in a given month and year ===\n");
   printf("Enter the year: ");
   scanf("%d", &year);
   if (year < 1)
   {
      printf("| Invalid year!");
   }
   else
   {
      printf("Enter the month (1-12): ");
      scanf("%d", &month);

      switch (month)
      {
      case 2: // check if the year is a leap year
         if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))
         {
            printf("| Month 2 of year %d has 29 days.", year);
         }
         else
         {
            printf("| Month 2 of year %d has 28 days.", year);
         }
         break;
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
         printf("| Month %d of year %d has 31 days.", month, year);
         break;
      case 4:
      case 6:
      case 9:
      case 11:
         printf("| Month %d of year %d has 30 days.", month, year);
         break;
      default:
         printf("| Invalid month!");
      }
   }

   // shortened version
   printf("\n\n--- Shortened version\n");
   int month2, year2;
   printf("Enter the month and the year (mm yyyy): ");
   scanf("%d%d", &month2, &year2);
   if (year2 < 1 || month2 < 1 || month2 > 12)
   {
      printf("| Invalid input!");
      return 0;
   }
   int leapYear = (year2 % 400 == 0) || ((year2 % 4 == 0) && (year2 % 100 != 0));
   switch (month2)
   {
   case 2:
      printf("| Month 2 of year %d has %d days.", year2, leapYear == 1 ? 29 : 28);
      break;
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:
      printf("| Month %d of year %d has 31 days.", month2, year2);
      break;
   default: // Months: 4, 6, 9,11
      printf("| Month %d of year %d has 30 days.", month2, year2);
   }
   return 0;
}