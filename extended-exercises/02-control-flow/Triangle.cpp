/* Write a program that inputs the coordinates of the three vertices of triangle ABC. Perform the following tasks:
   a. Check whether the three points A, B, and C form a triangle.
   If A, B, and C form a triangle, continue with the following tasks:
   b. Check whether triangle ABC is an isosceles triangle.
   c. Calculate and display the perimeter of triangle ABC.
   d. Calculate and display the area of triangle ABC. */
#include <stdio.h>
#include <math.h>

int main()
{
   // Declare variables
   double xa, ya, xb, yb, xc, yc; // A(xa,ya) B(xb,yb) C(xc,yc)
   double p, s;                   // 'p': the perimeter of triangle ABC | 's': the area of triangle ABC.

   // Input the coordinates of the points
   printf("Enter the coordinates x and y of point A: ");
   scanf("%lf%lf", &xa, &ya);
   printf("Enter the coordinates x and y of point B: ");
   scanf("%lf%lf", &xb, &yb);
   printf("Enter the coordinates x and y of point C: ");
   scanf("%lf%lf", &xc, &yc);

   // Calculate the lengths of the side
   double a = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2)); // Length of side BC
   double b = sqrt(pow(xa - xc, 2) + pow(ya - yc, 2)); // Length of side CA
   double c = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2)); // Length of side AB

   // Check whether the three points A, B, and C form a triangle
   if ((a + b > c) && (a + c > b) && (b + c > a))
   {
      printf("| The points A, B, and C form a triangle.\n");
      // Check whether triangle ABC is an isosceles triangle
      if (a == b || a == c || b == c)
      {
         printf("| Triangle ABC is isosceles.\n");
      }
      else
      {
         printf("| Triangle ABC is not isosceles.\n");
      }
      printf("| AB = %.2lf\tBC = %.2lf\tCA = %.2lf\n", c, a, b);

      // Calculate and display the perimeter and the area of triangle ABC
      p = a + b + c;
      printf("| Perimeter of triangle ABC (P): %.2lf\n", p);
      s = sqrt((p / 2) * (p / 2 - a) * (p / 2 - b) * (p / 2 - c)); // Heron's formula
      printf("| Area of triangle ABC (S): %.2lf", s);
   }
   else
   {
      printf("| The points A, B, and C do not form a triangle.");
   }

   return 0;
}