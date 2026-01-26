// 01 - 16: KIỂM TRA NĂM NHUẬN
int main()
{
     // Variable declaration
     int n;
     // Input
     scanf("%d", &n);
     // Processing
     if (n <= 0)
          printf("INVALID");
     else if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)))
          printf("YES");
     else
          printf("NO");
     // Output
     return 0;
}