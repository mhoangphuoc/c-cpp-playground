// 01 - 25: TAM GIÁC HỢP LỆ
// HEADER FILES
#include <stdio.h>
// MAIN FUNCTION
int main() {
    // DECLARATION
    int a, b, c;
    // INPUT
    scanf("%d%d%d", &a, &b, &c);
    // PROCESSING
    /* 
        all sides are positive -> a , b , c > 0
        a + b > c && b + c > a && c + a > b
     */
    // OUTPUT
    if (a < 1 || b < 1 || c < 1) printf("NO");
    else if ((a + b > c) &&  (b + c > a) && (c + a > b))
        printf("YES");
    else printf("NO");

    // METHOD 2:
    if (a < 1 || b < 1 || c < 1 || a + b <= c || b + c <= a || c + a <= b) printf("\nNO");
    else printf("\nYES");

    return 0;
}