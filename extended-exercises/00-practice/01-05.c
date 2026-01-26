// 01-  05: CHU VI VÀ DIỆN TÍCH HÌNH TRÒN
#include <stdio.h>
#include <math.h>
// Main function
int main()
{
   // Variable & Constant declarations
   int r;
   const double PI = acos(-1);
   double p, s;
   // Input
   scanf("%d", &r);
   // Processing
   p = 2 * PI * r;
   s = PI * r * r;
   // Output
   printf("%.2f %.2f", p, s);
   return 0;
}
