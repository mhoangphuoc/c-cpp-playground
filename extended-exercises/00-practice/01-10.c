// 01 - 10: TỔNG TÍCH LIÊN TIẾP
#include <stdio.h>
// Main function
int main()
{
    // Variable declarations
    int n;
    // Input
    scanf("%d", &n);
    // Processing
    // --- Method 1:
    double s;
    s = 1.0 * n * (n + 1) * (n + 2) / 3;
    //--- Method 2:
    double s2;
    for (int i = 1; i <= n; i++)
        s2 += 1.0 * i * (i + 1);
    // Output
    printf("%.2f", s);
    printf("\n%.2f", s2);
    return 0;
}
