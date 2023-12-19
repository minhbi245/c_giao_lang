#include <stdio.h>
#include <stdlib.h>

// Nhập từ bàn phím mảng 10 số nguyên bất kì, hỏi rằng con số 10 có xuất hiện trong mảng ko?

int main()
{
    int n[10];
    int pos = -1;   // Biến này đóng vai trò biến flag
                    // Vaf lưu vị trí tìm thấy luôn
                    // -1 để rằng 10 éo tìm thấy
                    // 10 tìm thấy nó bắt đầu ở vị trí mảng 0..9
                    // Nếu pos >= 0 ...9 nghĩa là tìm thấy mày rồi 10 à
                    // éo thấy, vẫn là -1
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

    for (int i = 0; i < 10; i++) {
        if (n[i] == 10) {
            pos = i; // pos lưu vị trí từ 0...9 nếu thấy, cờ phất luôn, pos đóng 2 vai luôn
            break;
        }
    }
    printf("\n");
    // Ngoài for
    if (pos == -1) {
        printf("10 not found\n");
    } else {
        printf("10 found at the position of %d\n", (pos + 1));
    }
    return 0;
}