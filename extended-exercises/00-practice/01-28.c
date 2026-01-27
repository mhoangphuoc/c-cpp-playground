// 01 - 28: PHƯƠNG TRÌNH BẬC 2
// HEADER FILES
#include <stdio.h>
#include <math.h>
// MAIN FUNCTION
int main(){
    // DECLARATION
    int a, b, c, delta;
    double x1, x2;
    // INPUT
    scanf("%d%d%d", &a, &b, &c);
    // PROCESSING
        if (a == 0) {
            if (b == 0) {
                if (c == 0) printf("INF");
                else printf("NO");
            } else {
                if (c == 0) printf("0.00");
                else printf ("%.2f", -1.0*c/b);
            }
        } else {
            delta = b*b - 4*a*c;
            if (delta < 0) printf("NO");
            else if (delta == 0) printf("%.2f", -b/(2.0*a));
            else {
                x1 = (-b - sqrt(delta))/(2*a);
                x2 = (-b + sqrt(delta))/(2*a);
                if (x1 < x2)    printf("%.2f %.2f", x1, x2);
                else printf("%.2f %.2f", x2, x1);
            }
        }
    return 0;
}