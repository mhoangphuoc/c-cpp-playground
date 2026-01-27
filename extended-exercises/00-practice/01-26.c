// 01 - 26: PHẦN LOẠI TAM GIÁC
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
    if (a < 1 || b < 1 || c < 1 || a + b <= c || b + c <= a || c + a <= b)
        printf("INVALID");
    else if (a == b && b == c) 
        printf("1");
    else if (a == b || b == c || c == a)
        printf("2");
    else if (a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b)
        printf("3");
    else printf("4");
    return 0;
}