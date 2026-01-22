// Input and Output in C
#include "stdio.h"
// Variable/Constants declaration
unsigned short age, birthDay, birthMonth;
unsigned int birthYear, currentYear;
long long globalPopulation = 8200000000LL;
// Functions/Methods
int main()
{
  // Input day of birth
  printf("Enter your day of birth: ");
  scanf("%hu", &birthDay);
  // Input month of birth
  printf("Enter your month of birth: ");
  scanf("%hu", &birthMonth);
  // Input year of birth
  printf("Enter your year of birth: ");
  scanf("%u", &birthYear);
  // Input current year
  printf("Enter current year: ");
  scanf("%u", &currentYear);
  age = currentYear - birthYear;

  // Display results
  printf("Current year: %u. The current global population is %lld.\nYour date of birth: %02hu/%02hu/%u and your age is %hu", currentYear, globalPopulation, birthDay, birthMonth, birthYear, age);

  return 0;
}
