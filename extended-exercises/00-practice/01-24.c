// 01 - 24: KÝ TỰ KẾ TIẾP
// HEADER FILES
#include <stdio.h>
#include <ctype.h>
// MAIN FUNCTION
int main() {
    // DECLARATION
    char c;
    // INPUT
    scanf("%c", &c);
    // PROCESSING
    // OUTPUT
    if (c == 'Z' || c == 'z')
        printf("a");
    else if ((c >= 'A') && (c <= 'Y'))
        printf("%c", 'a' + (c - 'A') + 1); 
    else if ((c >= 'a') && (c <= 'y')) 
        printf("%c", ++c);
    else printf("INVALID");
    // METHOD 2:
    char d;
    printf("\n");
    scanf(" %c", &d);
    if (d == 'Z' || d == 'z') printf("a");
    else if (islower(d)) printf("%c", ++d);
    else if (isupper(d)) printf("%c", 'a' + (d - 'A') + 1);
    else printf("INVALID");
    return 0;
}