#include <stdio.h>
#include <stdlib.h>

/*
    SẮP XẾP MẢNG TĂNG DẦN (TỪ TRÁI SANG PHẢI)

    IPO:
        - Input: 5 con số - MẢNG
        - Process:    5   -10     15      -20      25
                            [1]     [2]     [3]     [4]
        Thằng đầu mảng phải là nhỏ nhất!!!! -20 về đầu
        min [0]
        quét                [1] < min -> min = [1] = -10, pos = 1
        quét                        [2] < min?? KO
        quét                                 [3] < min -> min = [3] = -20, pos = 3
        quét                                           [4] < min??? KO

        * CÁCH 2, KO DÙNG POS
            -> [0] tiêu chuẩn/mốc!!!
            -> [0]min > [1], đứng đầu bảng phải nhỏ hơn người ta
            -> [0] > [1] có lớn hơn?, CÓ, đổi value,
            -> [0] > [2] có lớn hơn ko?, KO
            -> [0] > [3] có lớn hơn ko? CÓ, ĐỔI
            -> [0] > [4] có lớn hơn ko? KO

            [0] > [I] có lớn hơn? có thì đổi giữa [0] [i]

            [0] làm mốc vậy ta sẽ quét từ [1] >
            [0] làm mốc thì for từ 1, if[0] > [i] swap [0] và [i]
                                            int tmp = [0]
                                                [0] = [i];
                                                [i] = tmp

        Output: Mảng đã được sắp xếp lại theo thứ tự tăng dần

*/

int main()
{
    int a[] = {5, -10, 15, -20, 25}; // Mảng 5 for < 5
    int tmp;

    printf("Before sorting, the array is\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    // Chốt 0 làm mốc, so với tất cả phần còn lại, tức là chốt 0 thì quét từ 1
    // Chót 0 quét từ 1 - 0 là nhỏ nhất
    // for (int i = 1; i < 5; i++)
    // {
    //     if (a[0] > a[i])
    //     { // [0] đứng trước mà lại lớn hơn đúng sau -> phải đổi value liền
    //         tmp = a[0];
    //         a[0] = a[i];
    //         a[i] = tmp;
    //     }
    // }

    // Vì 0 đã xong, thì làm lại, làm cho phần còn lại của mảng
    // Chốt 1, vì 0 đã xong, chốt 1 thì quét từ 2
    // for (int i = 2; i < 5; i++)
    // {
    //     if (a[1] > a[i])
    //     {
    //         tmp = a[1];
    //         a[1] = a[i];
    //         a[i] = tmp;
    //     }
    // }

    // Chốt 2, chốt xong 2 thì quét từ 3

    // for (int i = 3; i < 5; i++) {
    //     if (a[2] > a[i]) {
    //         tmp = a[2];
    //         a[2] = a[i];
    //         a[i] = tmp;
    //     }
    // }

    // chốt 3, chốt 3 quét từ 4 (4 hết mẹ mảng rồi)
    // Chốt đến áp chót, để quét từ chót - hết mảng luôn!!!

    // for (int i = 4; i < 5; i++) {
    //     if(a[3] > a[i]) {
    //         tmp = a[3];
    //         a[3] = a[i];
    //         a[i] = tmp;
    //     }
    // }

    // Ở trên nhiều vòng for thực hiện một việc -> gom lại thành 1 vòng for lớn

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if(a[i] > a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    printf("After sorting, the array is\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}