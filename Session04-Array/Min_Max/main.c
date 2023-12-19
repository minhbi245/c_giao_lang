#include <stdio.h>
#include <stdlib.h>

// Nhập 1 mảng 10 con số. In ra con số nhỏ nhất, lớn nhất của mảng
// IPO
// Input: Nhập mảng 10 số, khai báo lẻ hoặc sỉ - MẢNG
// Process: -5 10 100 -50 1000
// Quét, duyệt qua cả mảng, [i] mày là mấy??
//
// Output: min, max -> 2 biến khác nhau chứ min max

/*
    -5  10  100 -50 1000
    [0] [1] [2]  [3] [4]

        - Quét nhìn qua cả mảng, [i] mày là mấy???
        - Biến cờ, nguyên tắc giả định, cho đến khi thấy sai thì điều chỉnh, ko sai thì vẫn đúng
        - min = -5 = [0] thằng đầu tiên mảng là MIN

        if [1] < min, min = [1] -> ko xảy ra, min cũ -5
        if [2] < min, min = [2] -> ko xảy ra, min cũ -5
        if [3] < min, min = [3] -> có xảy ra, min = -50
        if [4] < min, min = [4] -? ko xảy ra, min = -50
*/

int main()
{
    int a[] = {-5, 10, 100, -50, 1000, 1, 2, -50, 1001, 1};
    int min, max;
    min = a[0]; // biến a[0] chứa value -5, tên biến phức tạp hơn
    max = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i]; // tao là max mà có thằng [i] > tao, đổi vai, max = thằng[i]
        }
        if (a[i] < min)
        {
            min = a[i]; // Cờ chỉ đổi min khi min hiện tại lại lớn hơn ai đó
        }
    }

    printf("The min value of this array is: %d\n", min);
    printf("The max value of this array is: %d\n", max);
    return 0;
}