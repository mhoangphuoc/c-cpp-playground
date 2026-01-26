// 01 - 15: KIỂM TRA CHIA HẾT
#include <stdio.h>
// Main function
int main()
{
     // Variable declarations
     long long n;
     // Input
     scanf("%lld", &n);
     // Processing
     // Output
     printf("%d", (n % 5 == 0) && (n % 3 == 0) ? 1 : 0);
     return 0;
}