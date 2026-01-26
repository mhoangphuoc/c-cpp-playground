// 01 - 13: BỘI SỐ LỚN NHẤT
#include <stdio.h>
// Main function
int main()
{
     // Variable declarations
     int a, b, x;
     // Input
     scanf("%d%d", &a, &b);
     // Processing
     x = a - (a % b);
     // Output
     printf("%d", x);
     return 0;
}
