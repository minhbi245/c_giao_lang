#include <stdio.h>
#include <stdlib.h>

// Khảo sát RAM được cấp cho mảng

int main()
{
    float c[10];

    printf("Hoi nha cua 10 bien/phan tu mang/element o dau?\n");
    /*
        printf("The address of c[0] on ram is %u\n", &c[0]);
        printf("The address of c[1] on ram is %u\n", &c[1]);
        printf("The address of c[2] on ram is %u\n", &c[2]);
        printf("The address of c[3] on ram is %u\n", &c[3]);
    */ 

    for (int i = 0; i < 10; i++)
    {
        printf("The address of c[%d] on ram is %u\n", i, &c[i]);
    }

    /*
        [i] i chạy từ 0..cuối mảng
        [index chỉ số phần tử/thứ tự/biến thứ mấy!!!]

        MỘT ĐIỀU CỰC KÌ ĐẶC BIỆT KHI CHƠI VỚI MẢNG
        NÓ DÍNH ĐẾN TRUYỀN THAM CHIẾU!!!
        HÀM MÀ NHẬN VÀO MẢNG, THÌ KO PHẢI LÀ TRUYỀN GIÁ TRỊ/THAM TRỊ
        MÀ LÀ ĐANG TRUYỀN THAM CHIẾU!!!
        KO PHẢI LÀ TRUYỀN KIỂU TAO CHO MÀY 1 COPY/PHOTO ĐÂU

        TÊN MẢNG ĐẶC BIỆT LẮM LUÔN, TÊN MẢNG LÀ 1 BIẾN, CÓ VALUE SIÊU ĐẶC BIỆT,
        CHÍNH LÀ SỐ NHÀ CỦA THẰNG BIẾN ĐẦU MẢNG
    */

   printf("THE VALUE OF C IS %d\n", c);


    return 0;
}