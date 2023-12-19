#include <stdio.h>
#include <stdlib.h>

// Lưu 10 cột điểm của môn C và in ra
// IPO 10 biến

int main() {
    float c1, c2, c3, c4, c5, c6, c7, c8, c9, c10; // khai báo lẻ, không hiệu quả
    float c[10];    // y chang kết quả câu lệnh trên, có 10 biến luôn !!!
                    // c[0], c[1], c[2], ... , c[9]      

    c1 = 10.0;  // Biến lẻ
    c[0] = 10.0;// Biến kiểu mảng, vẫn là biến float hoy mà
                // tên phức tạp hơn tí      

    printf("Bien le: %.2f, %.2f, %.2f\n", c1, c2, c3);
    printf("Bien mang: %.2f, %.2f, %.2f\n", c[0], c[1], c[2]);
    // Mỗi biến trong mảng, tính từ 0, được gọi là 1 phần tử mảng, ELEMENT
    // Muốn nhập giá trị cho biến thường/biến mảng/phần tử của mảng
    printf("Input 2 grades (0..10): ");
    scanf("%f", &c2);
    scanf("%f", &c[1]);

    printf("After inputing two grades, the current grades are:\n");
    printf("Bien le: %.2f, %.2f %.2f\n", c1, c2, c3);
    printf("Bien mang: %.2f %.2f %.2f", c[0], c[1], c[2]);

    // Nếu tui muốn nhập hết 10 biến lẻ, 10 biến SỈ - MẢNG
    scanf("%f %f %f %f %f %f %f", &c1, &c2, &c3, &c4, &c5, &c6);
    scanf("%f", &c[i]); // i chạy từ 0...9
    return 0;
}