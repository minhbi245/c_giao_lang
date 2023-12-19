#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 23;
    int b = 100;
    int tmp; // t, tmp, temp, temporary - biến tạp, trung gian
    printf("Before swapping, a = %d; b = %d\n", a, b);

    tmp = a;    // cất lại 23 trước khi đi chơi với người mới;
    a = b;      // a lấy 100 của b, mất 23, ko lo, t đã giữ, đẩy cho b sau  
    b = tmp;      // b lấy cũ của a đang nằm ở t là 23

    printf("After swaping, a = %d; b = %d\n", a, b);

    printf("After swapping, a = %d; b = %d\n", a, b);
    return 0;
}