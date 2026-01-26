// 01 - 12: TỔNG ĐAN DẤU
#include <stdio.h>
#include <math.h>
int main()
{
     // Variable declarations
     long long n, s;
     // Input
     scanf("%lld", &n);
     // Processing
     //--- Method 1:
     if (n % 2 == 0)
          s = n / 2;
     else
          s = -(n + 1) / 2;
     //--- Method 2:
     // long long s2 = 0;
     // for (long long i = 1; i <= n; i++)
     //     s2 += i * pow(-1, i);
     // Output
     printf("%lld", s);
     // printf("\n%lld", s2);
     return 0;
}
