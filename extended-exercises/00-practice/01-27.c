// 01 - 27: CHUYỂN ĐỔI THỜI GIAN
// HEADER FILES
#include <stdio.h>
// MAIN FUNCTION
int main() {
    // DECLARATION
    int n;
    // INPUT
    scanf("%d", &n);
    // PROCESSING
    // OUTPUT
    printf("%d %d %d", n/365, (n%365)/7, (n%365)%7);
    return 0;
}