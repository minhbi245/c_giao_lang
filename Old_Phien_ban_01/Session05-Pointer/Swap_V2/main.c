#include <stdio.h>
#include <stdlib.h>

/*
    - Viết hàm hoán đổi 2 value!!! a = 10, b = 100
    ->                             a = 100, b = 10
*/

// void swapV1(int a, int b);

void swapV2(int *a, int *b); // Cho tao xin 2 địa chỉ của 2 biến int mẹ nào đó ở xa xa
                             // Lát tao dọn nhà cả 2 đứa xa xa đó luôn

int main()
{

    int a = 10;
    int b = 100;

    printf("In main(), before swapping, a = %d; b = %d\n", a, b);
    // swapV1(a, b);
    swapV2(&a, &b);
    printf("In main(), after swapping, a = %d; b = %d\n", a, b);
    return 0;
}

/*
void swapV1(int a, int b)
{
    printf("Before swapping in swapV1(): a = %d; b = %d\n", a, b);
    int t;
    t = a;  // Biến trung gian `t` -> lưu lại giá trị cũ `a` trước khi đi với người mới
    a = b;
    b = t;  // b bằng người cũ
    printf("After swapping, in swapV1(): a = %d; b = %d\n", a, b);
}
*/

void swapV2(int* a, int* b) {
    // *a là đứa xa xa đó, *hari là ví của Trấn Thành ở xa xa
    // *b cũng là đứa xa xa á, *hari là ví của Tiến Đạt trong trường hợp này
    int temp = *a; // Lấy value đứa xa xa cất đi
    *a = *b; // Lấy value đứa xa xa b nào đó, cất vào xa xa a nào đó
    *b = temp;
}
