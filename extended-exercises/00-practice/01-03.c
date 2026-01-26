// 01 - 03: TÍNH GIÁ TỊ ĐA THỨC II
#include <stdio.h>
// Main function
int main()
{
   // Variable declaration
   int a, b, c;
   long long s;
   // Input
   scanf("%d %d %d", &a, &b, &c);
   // Processing
   s = 1ll * a * (b + c) + 1ll * b * (a + c);
   // Output
   printf("%lld", s);
   return 0;
}