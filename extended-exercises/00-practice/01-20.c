// 01 - 20: KIỂM TRA CHỮ CÁI
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
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("YES");
    else printf("NO");
    // METHOD 2:
    printf("%s", islower((unsigned char)c) || isupper((unsigned char)c) ? "\nYES" : "\nNO");
    return 0;
}