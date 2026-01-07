#include <stdio.h>

int main()
{
  // KIỂU DỮ LIỆU KÝ TỰ
  char a = 'A'; // Gán biến a có giá trị là A với kiểu dữ liệu ký tự

  // KIỂU DỮ LIỆU SỐ NGUYÊN: short < int < long < long long
  int x1 = 10; // int: số nguyên chuyển được mặc định dùng nhiều nhất
  int x2 = -5;
  unsigned int x3 = 10;              // thêm unsigned: chỉ lấy giá trị >= 0 và được tăng thêm phạm vi dương
  short x4 = 100;                    // short: Số nguyên nhỏ
  long x5 = 1000000;                 // long: Số nguyên lớn
  long long x6 = 1000000000000000LL; // long long: Số nguyên rất lớn

  // KIỂU DỮ LIỆU SỐ THỰC
  float y1 = 214.24f;              // Độ chính xác ~ 6-7 chữ số
  double y2 = 3.1415926535;        // Độ chính xác cao hơn float ~ 15 chữ số -> Thường được mặc định dùng nhiều nhất
  long double y3 = 21.12412412511; // Chính xác hơn double

  return 0;
}
