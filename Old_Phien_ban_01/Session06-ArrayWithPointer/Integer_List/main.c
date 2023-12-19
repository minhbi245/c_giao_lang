#include <stdio.h>
#include <stdlib.h>

// BÀ CON GIỮA MẢNG VÀ CON TRỎ
// MẢNG TĨNH, MẢNG ĐỘNG, CON TRỎ CÓ BÀ CON !!!
// TRUYỀN THAM CHIẾU, MẢNG/CON TRỎ LÀ ĐẦU VÀO CỦA HÀM

// LƯU VÀ IN RA MẢNG 10 SỐ NGUYÊN BẤT KÌ

int main() {
    int a[] = {5, 10, 15, 20, 25};  // Mảng là khai báo nhiều biến cùng lúc, cùng kiểu, cùng tên, Ở SÁT NHAU!!!

    for (int i = 0; i < 5; i++) {
        printf("The address of a[%d]: %u | has value: %d\n", i, &a[i], a[i]);
    }

    // Các nhà int cách nhau là 4 byte, ước gì dùng con trỏ ++ -- leo qua xem các value

    int* myPointer = &a[0];

 // In mảng coi sao
    printf("a[0] = %d\n", a[0]);
    printf("a[0] = %d\n", *myPointer);
    printf("a[1] = %d\n", a[1]);
    myPointer++; // Nhảy sang 1 nhà, int* nhảy 4 byte sang nhà kế
    printf("a[1] = %d\n", *myPointer);
    
    // IN CẢ MẢNG CHO NGON
    *myPointer = &a[0]; // Reset con trỏ, trỏ về đầu mảng!!!!
    printf("The array has value:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d \n", *(myPointer + i));
        // myPointer vẫn chốt đầu mảng
        // Lấy tọa độ + i, rồi vào tọa độ đó, in đi value gốc
        // Tao vẫn chốt đầu mảng
    }

    // Biến con tro + thì là có địa chỉ mới
    // Vào địa chỉ mới *(của con trỏ +)
    // Con trỏ vẫn chốt, mà vẫn duyệt được mảng!!!!

    return 0;
}