// Arithmetic Operations
#include "stdio.h"

int main()
{
  double a, b;

  // Enter values of a & b
  printf("Enter the value of a: ");
  scanf("%lf", &a);
  printf("Enter the value of b: ");
  scanf("%lf", &b);

  // Perform the calculation & display results
  //--- Addition
  double sum = a + b;
  printf("- Sum:\t\t%.2f\t+\t%.2f\t=\t%.2f", a, b, sum);

  //--- Subtraction
  double difference = a - b;
  printf("\n- Difference:\t%.2f\t-\t%.2f\t=\t%.2f", a, b, difference);

  //--- Multiplication
  double product = a * b;
  printf("\n- Product:\t%.2f\t*\t%.2f\t=\t%.2f", a, b, product);

  //--- Floating-point division
  double division = a / b;
  printf("\n- Division:\t%.2f\t/\t%.2f\t=\t%.2f", a, b, division);

  //--- Integer division
  int c, d;
  printf("\n\nEnter the integer value of c: ");
  scanf("%d", &c);
  printf("Enter the integer value of d: ");
  scanf("%d", &d);
  int quotient = c / d;
  printf("- Quotient:\t%d\t/\t%d\t=\t%d", c, d, quotient);

  //--- Remainder operation
  int remainder = c % d;
  printf("\n- Remainder:\t%d\t%%\t%d\t=\t%d", c, d, remainder);

  //--- Increment operators
  int x = 5, y = 5;
  printf("\n\nInitial value: x = %d", x);
  printf("\n- Step 1: x = %d", x++); // Increase "x" by 1 after executing the statement -> Display: "Step 1: x = 5" -> Now x = 6
  printf("\n- Step 2: x = %d", x);   // Display: "Step 2: x = 6"
  printf("\n- Step 3: x = %d", ++x); // Increase "x" by 1 before executing the statement -> Now x = 7 -> Display: "Step 3: x = 7"
  printf("\n- Step 4: x = %d", x);   // Display: "Step 4: x = 7"

  //--- Decrement operators
  printf("\n\nInitial value: y = %d", y);
  printf("\n- Step 1: y = %d", --y); // Decrease "y" by 1 before executing the statement -> Now y = 4 -> Display: "Step 1: y = 4"
  printf("\n- Step 2: y = %d", y);   // Display: "Step 2: y = 4"
  printf("\n- Step 3: y = %d", y--); // Decrease "y" by 1 after executing the statement -> Display: "Step 3: y = 4" -> Now y = 3
  printf("\n- Step 4: y = %d", y);   // Display: "Step 4: y = 3"

  return 0;
}