#include <stdio.h>
#include <stdlib.h>

/*
    CHỐT LẠI VỀ CON TRỎ, LÀ 1 BIẾN LƯU ĐỊA CHỈ CỦA MỘT BIẾN KHÁC
    TAO ĐANG LÀ AI??? -> TAO LÀ BIẾN CON TRỎ
    NẾU NHƯ HỎI BIẾN TAO CÓ GÌ??? -> TAO CÓ ĐỊA CHỈ
    ĐỂ LẤY GIÁ TRỊ CỦA TAO??? -> *TAO 1 CÁI -> ĐẾN NHÀ THẰNG KIA LẤY GIÁ TRỊ
    KHỞI TẠO BIẾN CON TRỎ NHƯ TAO THÌ TYPE* NAME;/TYPE* NAME = &ANOTHER VAR;
*/

int main()
{

    int a[5] = {5, -10, -15, 20, -25};

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %4d; address: %u\n", i, a[i], &a[i]);
    }

    // Tên mảng là biến con trỏ, chốt số nhà thằng đầu mảng, hỏi con trỏ có gì, em có tọa độ. Xem tọa có gì thì dùng *pointer
    printf("a stores/holds the value: %u\n", a);

    // Khi tui biết tên mảng là con trỏ, mà lại còn trỏ thằng đầu dãy của mảng
    // Tui có thể vào nhà thằng đầu dãy *pointer/*hari
    printf("a[0] = %d\n", *a);       // value: 5
    printf("a[1] = %d\n", *(a + 1)); // value: -10

    // Sửa value mảng được ko?, được chứ, sờ được là sửa được
    // Sửa a[1] = 69;
    *(a + 1) = 69; // từ đầu mảng, + 1 địa chỉ, vào địa chỉ đó sửa value, a[1] = 69

    printf("Array after update value through by pointer `a` \n");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %4d; address: %u\n", i, a[i], &a[i]);
    }

    /*
        - Chơi thử với Hari cái coi, con trỏ tự do, trỏ lung tung ++ thoải mái
        hari = ??? cần 1 địa chỉ ai đó!!! &ai-đó
        hari = &a[0]; &a[1]; đều okie heng
    */

    int *hari;
    hari = a; // Vì tên mảng chính là địa chỉ đầu tiên của phần tử biến đầu tiên trong mảng &a[0]

    // In thử mảng cái coi thông qua Hari
    printf("\nThe array has value (via Hari): \n ");
    for (int i = 0; i < 5; i++)
    {
        // printf("%d\t", a[i]);        // Quá bình thường duyệt mảng lấy giá trị phần tử như bình thường
        // printf("%d\t", *(a + i));    // Vừa học cách này từ hôm qua, vừa ôn
        // printf("%d\t", *(hari + i));    // Cách này thì hari như `a`, vẫn chốt đứng ở đầu mảng
        printf("%d\t", *(hari++)); // Còn cách này thì hari trỏ lung tung, hari sẽ đứng cuối mạng khi vòng lặp chạy xong
    }

    printf("\nBelieve or not? Hari now points to: %u\n", --hari);
    printf("Believe or not? The last element of array: %d\n", *hari); // -25

    printf("\n");
    return 0;
}