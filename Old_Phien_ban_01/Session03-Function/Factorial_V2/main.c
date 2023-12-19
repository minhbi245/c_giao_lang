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

    getFactorialV4(5); // Ngầm trả về 120, éo thèm in
                       // nếu in ko reuse được tốt nhất!!!

    printf("result: %d\n", getFactorialV4(0));
    printf("result: %d\n", getFactorialV4(6));
    return 0;
}

/*
int getFactorialV4(int n)
{
    int acc = 1;

    return 69;  // TOANG CON MẸ BẠN RỒI, VỪA VÀO HÀM CÓ GIÁ TRỊ LUÔN, KO THỰC HIỆN CÁC LỆNH CÒN LẠI

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            acc *= i;
        }
        return acc;
    }

    // Câu lệnh này CPU hok chạm tới được, do đã return ở trên mọe nó rồi
    printf("Cho anh cham em them ti nua!\n");
}
*/

// PHIÊN BẢN RÚT GỌN HƠN
int getFactorialV4(int n)
{
    int acc = 1;

    if (n == 0 || n == 1)
    {
        return 1;
        // Chưa chặn n âm!!!
        // Bỏ else luôn để rút gọn.
    }

    for (int i = 2; i <= n; i++)
    {
        acc *= i;
    }
    return acc;

    // Câu lệnh này CPU hok chạm tới được, do đã return ở trên mọe nó rồi
    printf("Cho anh cham em them ti nua!\n");
}