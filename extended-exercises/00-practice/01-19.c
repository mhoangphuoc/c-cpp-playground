// 01 - 19: KIỂM TRA CHỮ CÁI HOA
int main() {
    // VARIABLE DECLARATIONS 
    char c;
    // INPUT
    scanf("%c", &c);
    // PROCESSING
    // OUTPUT
    if (c >= 'A' && c <= 'Z')   printf("YES");
    else                        printf("NO");
    // METHOD 2:
    printf("%s", isupper((unsigned char)c) ? "YES" : "NO");
    return 0;
}