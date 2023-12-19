#include <stdio.h>
#include <stdlib.h>

// Nhập 1 mảng 10 con số từ bàn phím, Kiểm tra xem số 10 
// Có xuất hiện trong mảng hay ko

// IPO
// Input: 10 biến
// Process: Lôi từng biến ra hỏi value == 10 không?, có thì kết luận
// Output: in ra có hay ko?

int main() {

    int a[] = {5, -1000, 100, 50, 70, 6, -1, 10, 8, 20};
    /*
        Nên nhớ, ta có 10 biến int đó heng a[0], a[1], ....
        Bình đăng mọi biến int khác, như int yob;
        Duyệt mảng, quét từ đầu đến cuối mảng
    */

   for (int i = 0; i < 10; i++) {
        if (a[i] == 10) {
            printf("Hey, found 10 at position of %d\n", i);
        } else {
            printf("Not found 10 in the array\n");
        }
   }

    return 0;
}