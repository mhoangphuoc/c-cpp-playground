// 01 - 30:  KIỂM TRA PHÉP CHIA
// HEADER FILES
#include <stdio.h>
// MAIN FUNCTION
int main() {
    // DECLARATION
    long long a, b, c;
    // INPUT
    scanf("%lld%lld%lld", &a, &b, &c);
    // PROCESSING
    // OUTPUT
    if (b != 0 && a%b == 0 && a/b == c) printf("/");
    else if (c != 0 && b%c == 0 && b/c == a) printf("/");
    else if (a != 0 && c%a == 0 && c/a == b) printf("/");
    else printf("NOSOL");
    return 0;
}