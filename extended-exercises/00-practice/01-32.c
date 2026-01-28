// 01 - 32: SỐ NHỎ THỨ 2
// HEADER FILES
#include <stdio.h>
// MAIN FUNCTION
int main(){
    // DECLARATION
    long long a, b, c, d, e;
    // INPUT
    scanf("%lld%lld%lld%lld%lld", &a, &b, &c, &d, &e);
    // PROCESSING
    long long min, n;
    if (a > b) {
        n = a;
        min = b;
    } else {
        n = b;
        min = a;
    }

    if (c < min) {
        n = min;
        min = c;
    } else if (c < n) n = c;

    if (d < min) {
        n = min;
        min = d;
    } else if (d < n) n = d;

    if (e < min) {
        n = min;
        min = e;
    } else if (e < n) n = e;
    // OUTPUT
    printf("%lld", n);
    return 0;
}