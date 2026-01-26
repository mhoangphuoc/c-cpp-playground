// 01 - 18: KIỂM TRA CHỮ CÁI THƯỜNG
#include <stdio.h>
#include <ctype.h>
// MAIN FUNCTION
int main() {
    // VARIABLE DECLARATIONS
    char c;
    // INPUT
    scanf("%c", &c);
    // PROCESSING
    // OUTPUT
    if (c >= 'a' && c <= 'z') printf("YES");
    else printf("NO");
    // METHOD 2:
    printf("%s", islower(c) ? "\nYES" : "\nNO");
    return 0;
}