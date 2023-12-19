#include <stdio.h>
#include <stdlib.h>

/*
    - Viết hàm hoán đổi 2 value!!! a = 10, b = 100
    ->                             a = 100, b = 10
*/

void swapV1(int a, int b);

int main()
{

    int a = 10;
    int b = 100;

    printf("In main(), before swapping, a = %d; b = %d\n", a, b);
    swapV1(a, b);
    printf("In main(), after swapping, a = %d; b = %d\n", a, b);
    return 0;
}

void swapV1(int a, int b)
{
    printf("Before swapping in swapV1(): a = %d; b = %d\n", a, b);
    int t;
    t = a;  // Biến trung gian `t` -> lưu lại giá trị cũ `a` trước khi đi với người mới
    a = b;
    b = t;  // b bằng người cũ
    printf("After swapping, in swapV1(): a = %d; b = %d\n", a, b);
}