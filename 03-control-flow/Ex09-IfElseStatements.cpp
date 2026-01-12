// If-Else Conditional Statements
#include <stdio.h>

int main()
{
  // Check whether the integer 'n' is smaller than 20 and print a message to the console if true
  int n;
  printf("Enter the integer value for n: ");
  scanf("%d", &n);

  if (n < 20)
  {
    printf("| n is smaller than 20.\n");
  }

  // Check whether the integer 'n' is even or odd and print the result to the console
  // printf("| n is %s", (n % 2 == 0) ? "EVEN." : "ODD.");
  if (n % 2 == 0)
  {
    printf("| n is EVEN.\n");
  }
  else
  {
    printf("| n is ODD.\n");
  }

  // Compare n with 15 and print the result to the console
  if (n > 15)
  {
    printf("| n is larger than 15.\n");
  }
  else if (n < 15)
  {
    printf("| n is smaller than 15.\n");
  }
  else
  {
    printf("| n is equal to 15.\n");
  }

  return 0;
}