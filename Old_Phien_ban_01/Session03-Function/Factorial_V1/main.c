#include <stdio.h>
#include <stdlib.h>

/*
    Viết hàm tính n!
    IPO:
        - Input: n
        - Process: 1.2.3.4 ... .n -> Nhồi heo đất, nhồi theo kiểu phép nhân ko phải phép cộng
        - Output: Kết quả nhân dồn!!!

        -> Chọn hàm loại mấy? Viết thử cả 4 xem sao
*/

void getFactorialV1();
void getFactorialV2(int n);
int getFactorialV3();
int getFactorialV4(int n);

int main()
{
    // int n;
    // printf("Input a number (n >= 0) to get the factorial: ");
    // scanf("%d", &n);
    // getFactorialV1();
    // getFactorialV2(n);
    // getFactorialV3();
    // int result = getFactorialV3(); // Mày là hàm ói ra value
    // Hứng value để dùng

    // printf("Result: %d\n", result);
    // printf("The result n!: %d\n", getFactorialV3());    // mày là value acc ngầm trong đó
                                                        // in acc hiện thân qua tên hàm!!! 

    getFactorialV4(5);  // Ngầm trả về 120, éo thèm in
                        // nếu in ko reuse được tốt nhất!!!
    
    printf("result: %d\n", getFactorialV4(5));
    return 0;
}

void getFactorialV1()
{
    int n, acc = 1;
    printf("Input a number (n >= 0) to get the factorial: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) // Tạm thời chưa chặn vụ n < 0
    {                     // Coi như tạm chấp nhận n = 2 3 4 5 6 7

        acc = 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            acc *= i;
        }
    }
    // return acc; do hàm ko return, thì phải in ra
    printf("%d! = %d", n, acc); // Còn nếu có return thì ko nên in
}

void getFactorialV2(int n)
{
    int acc = 1;

    if (n == 0 || n == 1)
    {
        acc = 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            acc *= i;
        }
    }

    printf("%d! = %d\n", n, acc);
}

int getFactorialV3()
{
    int n, acc = 1;
    printf("Input a number (n >= 0) to get the factorial: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        acc = 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            acc *= i;
        }
    }

    return acc;
}

int getFactorialV4(int n)
{
    int acc = 1;

    if (n == 0 || n == 1)
    {
        acc = 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            acc *= i;
        }
    }

    return acc;
}