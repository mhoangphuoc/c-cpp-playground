// 01 - 23: CHUYỂN THƯỜNG THÀNH HOA
// HEADER FILSE
#include <stdio.h>
#include <ctype.h>
// MAIN FUNCTION
int main() {
    // DECLARATION
    char c;
    // INPUT
    scanf("%c", &c);
    // PROCESSING
    if ( c >= 'a' && c <= 'z') { c = 'A' + (c - 'a'); }
    // OUTPUT
    printf("%c", c);
    // METHOD 2:
    printf("\n%c", islower((unsigned char)c) ? isupper((unsigned char)c) : c);
    return 0;
}