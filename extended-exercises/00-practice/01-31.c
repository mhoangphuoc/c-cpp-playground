// XẾP LOẠI HỌC LỰC
// HEADER FILES
#include <stdio.h>
#include <math.h>
// MAIN FUNCTION
int main(){
    // DECLARATION
    double a, b, c, d;
    int ai, bi, ci, di;
    // INPUT
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    // PROCESSING
    ai = round(10 * a + 1e-9);
    bi = round(10 * b + 1e-9);
    ci = 2 * round(10 * c + 1e-9);
    di = 3 * round(10 * d + 1e-9);
    int sumGra = ai + bi + ci + di;
    // OUTPUT
    if (sumGra >= (80 * 7))
        printf("A");
    else if ((sumGra >= (65 * 7)) && (sumGra < (80 * 7)))
        printf("B");
    else if (sumGra < (50 * 7))
        printf("D");
    else
        printf("C");
    return 0;
}