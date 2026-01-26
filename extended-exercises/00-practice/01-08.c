// 01 - 08: TỔNG CÁC SỐ NGUYÊN
#include <stdio.h>
// Main function
int main()
{
   // Variable declarations
   int n;
   long long s1, s2;
   // Input
   scanf("%d", &n);
   // Processing
   //--- Method 1
   s1 = 1ll * n * (n + 1) / 2;
   //--- Output
   printf("%lld\n", s1);
   //--- Method 2
   s2 = 0;
   for (int i = 0; i <= n; i++)
      s2 += i;
   //--- Output
   printf("%lld", s2);
   return 0;
}