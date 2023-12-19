#include <stdio.h>
#include <stdlib.h>

/*
    Vấn đề:
        - TT đi Mĩ mang theo 5k$
        - TT có xài mua LV hết 1000$
        - Sau đó TT đưa ví cho Hari dùng

        Sau đó về VN, Hari đi uống cafe với Tiến Đạt
        Tiến Đạt cũng mua tặng Hari một túi HM
*/

int main()
{

    int tranThanh = 5000;
    int tienDat = 4000;

    printf("1st, TT has %d; TD has %d\n", tranThanh, tienDat);
    printf("1st, vi' TT is at %u; vi' TD is at %u\n", &tranThanh, &tienDat);
    // @ ví là sát nhau, hàng xóm, vùng RAM TD 08 09 10 11
    //                                      TT 12 13 14 15

    int* hari = &tranThanh;

    // Hỏi Hari xem Trấn Thành đang có bao nhiêu
    printf("1st, Hari said, TT has %d\n", *hari);

    // Hari mua đồ hết 4000
    *hari = *hari - 4000;

    // hỏi lại Trấn Thành còn bao nhiêu, hỏi qua Hari cũng okie, trực tiếp Trấn Thành cũng okie
    printf("2nd, Hari said, TT now has(after 4K) %d\n", *hari);
    printf("2nd, TT said, TT now has (after 4K by Hari) %d\n", tranThanh);

    // Hari xem ví TD, ta muốn có danh bạ mới, thay danh bạ cũ, gán giá trị mới cho biến con tro - là 1 biến gán = như bình thường
    // CHỈ ĐƯỢC GÁN = ĐỊA CHÌ KHÁC!!!
    hari = &tienDat;
    printf("3d, Hari said, TD now has %d\n", *hari);
    *hari = *hari - 2000; // Tiêu Tiến Đạt 2000$
    printf("4th, TD said, TD now has (after Hari used 2k) %d\n", tienDat);

    return 0;
}