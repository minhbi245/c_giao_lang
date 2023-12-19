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

    // Chốt áp chót đi quét với chót mảng
    for (int z = 0; z < 5 - 1; z++) { // z = 0, 1, 2, 3
        for (int j = z + 1; j < 5; j++) {
            if(a[z] > a[j]) {
                tmp = a[z];
                a[z] = a[j];
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