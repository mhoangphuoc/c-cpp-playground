// 01 - 29: ĐẾM SỐ NGUYÊN TRONG ĐOẠN
// HEADER FILES
#include <stdio.h>
#include <math.h>
// MAIN FUNCTION
int main(){
    // DECLARATION
    double a, b;
    // INPUT
    scanf("%lf%lf", &a, &b);
    // PROCESSING
    // OUTPUT
    if (a > b) printf("0");
    else {
        printf("%.0f", floor(b) - ceil(a) + 1);        
    }
    return 0;
}