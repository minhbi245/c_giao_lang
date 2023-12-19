#include <stdio.h>
#include <stdlib.h>

/*
    Tính tổng của dãy số từ 1...100

    IPO

    Input: nếu không cần nhập n từ bàn phím thì không cần biến input, vì tăng từ 1...100 có sẵn

    Process:
    - Khởi tạo một biến sum/acc để chứa giá trị cộng dồn: int acc = 0;
    - Lưu ý nên có giá trị nếu khai báo int acc; thì có giá trị rác cộng sẽ bị sai
    - Cộng dồn 1 + 2 + 3 + 4 + 5 + 6 + ... + 100
           acc = 3 + 3
             acc = 6    +  4
              acc =     10   + 5
                 acc =     15    + 6 = 21
*/

int main()
{
    int count = 1;
    int acc = 0; // VERY IMPORTANT
    printf("Using standard FOR\n");
    for (int i = 1; i <= 100; i++)
    {
        acc += i;
        printf("The sum using FOR when i = %d is: %d\n", i, acc);
    }
    printf("Sum using FOR: %d\n", acc);
    printf("\n\nUsing DO-WHILE\n");
    acc = 0; // Hiệu ứng lề / SIDE EFFECT, cần reset lại biến tổng
    do
    {
        acc += count;
        printf("The sum using DO-WHILE when count = %d: %d\n", count, acc);
        count++; // Quan trọng, không có là lặp vô tận
    } while (count <= 100); // Còn đúng với điều kiện là còn làm, khi nào giá trị count khác với điều kiện thì thoát vòng lắp, count == 101 là sai điều kiện
    printf("The sum using DO-WHILE: %d\n", acc);

    printf("\n\nSum using WHILE\n");
    acc = 0;
    count = 1;
    while (count <= 100)
    {
        acc += count;
        count++;
    }
    printf("The sum using WHILE: %d\n", acc);
    printf("\n");
    return 0;
}