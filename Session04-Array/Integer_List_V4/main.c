#include <stdio.h>
#include <stdlib.h>

// Nhập 1 mảng 10 con số từ bàn phím, Kiểm tra xem số 10
// Có xuất hiện trong mảng hay ko

// IPO
// Input: 10 biến
// Process: Lôi từng biến ra hỏi value == 10 không?, có thì kết luận
// Output: in ra có hay ko?

int main()
{

    int a[] = {5, -1000, 100, 50, 70, 6, -1, 10, 8, 20};
    int positon;
    int found = 0; // Giả bộ ban đầu 0 thấy 10 cho đên khi thấy em
                   // Thì anh đổi trạng thái; biến sẽ giữ value cũ
                   // Cho đên khi bị thay đổi
                   /*
                       Nên nhớ, ta có 10 biến int đó heng a[0], a[1], ....
                       Bình đăng mọi biến int khác, như int yob;
                       Duyệt mảng, quét từ đầu đến cuối mảng
                   */

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 10)
        {
            positon = i;
            found = 1; // chết nhe, bắt gặp rồi
            break;
        }
    }

    if (found == 0) {
        printf("10 not found!!!!\n");
    } else {
        printf("10 found at %d !!!!\n", (positon + 1));
    }
    return 0;
}