// 01 - 11: TỔNG CÁC SỐ CHẴN
#include <stdio.h>
// Main function
int main()
{
    // Variable declarations
    int n;
    long long s;
    // Input
    scanf("%d", &n);
    // Processing
    //--- Method 1:
    s = 1ll * n * (n + 1);
    //--- Mehtod 2:
    long long s2 = 0;
    for (int i = 1; i <= n; i++)
        s2 += 2ll * i;
    // Output
    printf("%lld", s);
    printf("\n%lld", s2);
    return 0;
}
