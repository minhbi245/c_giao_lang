#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 23;
    int b = 100;
    printf("Before swapping, a = %d; b = %d\n", a, b);

    a = b;  // mày đưa cho tao
    // a lấy giá trị của b, cho nên a = b = 100 -> a = 100!!!
    
    b = a;  // tao đưa mày 
    // b lấy giá trị của a, a đang là 100!!! do lệnh trước!!!
    // b phải lấy giá trị cũ của A, A ngày xưa đấy!!!
    // Ngày xưa A = 23!!! 23 bị mất bởi lệnh A = B;
    // A = B Tức là A có giá trị mới
    // Cất cũ đi trước khi chơi với người mới
    // A cũ, A 23 được cất đi!!!!
    printf("After swapping, a = %d; b = %d\n", a, b);
    return 0;
}