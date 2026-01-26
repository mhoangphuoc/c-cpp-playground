// 01 - 07: CHUYỂN ĐỔI NHIỆT ĐỘ
#include <stdio.h>
// Main function
int main()
{
   // Variable declarations
   int c;
   double f;
   // Input
   scanf("%d", &c);
   // Processing
   f = ((double)c * 9 / 5) + 32;
   // Output
   printf("%.2f", f);
   return 0;
}