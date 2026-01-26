// 01 - 17: SỐ NGÀY TRONG THÁNG
#include <stdio.h>

int main()
{
    int t, n;

    scanf("%d%d", &t, &n);

    if (n < 1)
        printf("INVALID");
    else {
        switch (t) {
            case 1: case 3: case 5:  case 8: case 10: case 12:
                printf("31");
                break;
            case 4: case 6: case 9: case 11:
                printf("30");
                break;
            case 2:
                printf("%d", (n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)) ? 29 : 28);
                break;
            default:
                printf("INVALID");
        }
    }
    return 0;
}