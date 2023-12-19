#include <stdio.h>
#include <stdlib.h>

// viết đoạn code theo style hàm tính bình phương của 1 con số
// IPO
// Input: 1 con số x
// Process: x * x
// Ouput: y = x * x

int fV4(int x); // 100% tương thích với hàm toán học y = f(x) = x^2
// y f    x      // Chỉ còn thiếu phần bình phương hoy
//  Lát hồi dưới ta làm nốt

int main()
{
    int x;
    printf("Please input the number x to calculate x^2: ");
    scanf("%d", &x);
    printf("The result: %d\n", fV4(x));
    return 0;
}

int fV4(int x)
{
    // coi như x đã có rồi, quy ước hàm nhận vào x, cứ giả bộ x sẽ có sau
    // xử lí trên x tương đương với tương lai sẽ xử lí trên value thật
    // xử lí trên công thức chính là xử lí trên value thật sau này
    // KHI XÀI HÀM THÌ PHẢI ĐƯA X VÀO. Y CHANG XÀI MÁY XAY SINH TỐ,
    // THÌ PHẢI ĐƯA TRÁI CÂY, GIẢ BỘ TRÁI CÂY CÓ RỒI, LÔI MÁY RA XÀI
    // LÔI MÁY RA XÀI THÌ TƯƠNG ĐƯƠNG TRÁI CÂY CŨNG PHẢI CÓ
    // CHỈ CÓ THẰNG NGÁO MỚI XÀI SCANF(X)

    // int y = x * x; // mày đưa x, tao bình phương, ném bình phương giá trị ra
    // return y;      // tao ném bình phương ra

    return x * x;
}