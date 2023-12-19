#include <stdio.h>
#include <stdlib.h>

/*
    Nhập từ bàn phím mảng 10 số nguyên bất kì
    Hỏi rằng có bao nhiêu số chẵn
    Tính tổng các số lẻ

    5 10 15 20 30 35 40 45

    IPO:
        - Input: Cần mảng
        - Process: Duyệt mảng, [i] mày chẵn ko? dạ em ko, kệ mẹ mày
                                                      có, count += 1
                                                      có, sum += [i] | sum = sum + [i]
                                                                ta lấy luôn value nhồi vào
        - Output: số con số chẵn, có mấy chẵn thì count tăng dần
*/ 

int main()
{
    int n[10], evenCount = 0, sumOdd = 0; // VIP

    printf("Please input 10 numbers\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Input number #%d: ", (i + 1)); // Lừa đảo số tt với user
        scanf("%d", &n[i]);
    }
    printf("\n");
    // in mảng đã nhập vào
    printf("You have just input the following numbers\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", n[i]);

    /*
        Process: Quét mảng, cùng lúc làm nhiều việc, đếm số chẵn, tính tổng lẻ, ...
                 Mỗi lần quét mảng, là ta có value biến [i]
                 Ta có quyền làm gì với value [i] biến [i] này mà
    */
   for (int i = 0; i < 10; i++) {
        // hỏi từng [i] coi mày là gì?
        if (n[i] % 2 == 0) {
            evenCount++; // gặp 1 thằng chẵn ++ liền
        } else {
            sumOdd += n[i]; // Gặp thằng lẻ, + luôn value thằng lẻ
                            // Nhồi heo đất
        }
   }
    printf("\n");

    printf("There is/are %d even number(s) in this array\n", evenCount);
    printf("The sum of odd number(s) in this array is: %d\n", sumOdd);
    return 0;
}