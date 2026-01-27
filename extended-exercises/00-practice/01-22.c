// 01 - 22: CHUYỂN HOA THÀNH THƯỜNG
#include <stdio.h>
#include <ctype.h>
// MAIN FUNCTION
int main() {
    // DECLARATION
    char c;
    // INPUT
    scanf("%c", &c);
    // PROCESSING
    if(c >= 'A' && c <= 'Z') {c = 'a' + (c - 'A');}
    // OUTPUT
    printf("%c", c);
    // METHOD 2:
    printf("\n%c", isupper((unsigned char)c) ? islower((unsigned char)c) : c);
    return 0;
}