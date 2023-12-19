#include <stdio.h>
#include <stdlib.h>

// Sắp xếp mảng các số nguyên giảm dần

// Hoán đổi thãn xác - dùng biến trung gian để lưu giá trị cũ

/*
    void swap(int a, int b); Đưa cho tao 2 con số, tao sẽ hoán đổi value
                5      10
            x = 5      y = 10

    Truyền tham trị - pass by value
    bản gốc ko đổi x y, mà chỉ đổi trong hàm a b mà thoy
*/

void swap(int *a, int *b); // Trong hàm, *a chính là x; *b chính là y
//  main()  &x      &y                      2* đổi nhau chính là x y đổi nhau
// main()   &a      &b

// Sắp xếo 1 mảng giảm dần
void sortArray(int a[], int size);
// Hàm nhận vào mảng có size phần tử
// Ko có size phần tử, làm sao ta for được

int main()
{
    int a[] = {5, -10, 15, -20, 25, 1000, 1};
    sortArray(a, 7);
    /* int x = 10, y = 100;
    printf("Before swapping, x = %d; y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d; y = %d\n", x, y);
    */

    return 0;
}

void sortArray(int a[], int size)
{
    printf("The array before sorting\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d\t", i, a[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n");
    printf("The array after sorting\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d\t", i, *(a + i));
    }
    printf("\n");
}

// PASS BY REFERENCE/POINTER
//             &x      &y
void swap(int *a, int *b)
{
    int temp = *a; // Lưu lại giá trị cũ của biến ở xa xa x ngoài main()
    *a = *b;       // x xa xa main() bằng y xa xa ở ngoài main()
    *b = temp;
}