// 01 - 01: PHẦN NGUYÊN & PHẦN DƯ
#include <stdio.h>
// Main function
int main()
{
   // Variable declaration
   long long a, b, quotient, remainder;
   // Input
   do
   {
      scanf("%lld %lld", &a, &b);
   } while (b == 0);
   // Processing
   quotient = a / b;
   remainder = a % b;
   // Ouput
   printf("%lld %lld", quotient, remainder);
   return 0;
}
