// 01 - 21: KIỂM TRA CHỮ SỐ
#include <stdio.h>
#include <ctype.h>
// MAIN FUNCTION
int main() {
    // VARIABLE DECLARATION
    char c;
    // INPUT
    scanf("%c", &c);
    // PROCESSING
    // OUTPUT
    if (c >= '0' && c <= '9') printf("YES");
    else printf("NO");
    // METHOD 2:
    printf("%s", isdigit((unsigned char)c) ? "YES" : "NO");
    return 0;
}