#include <stdio.h>
#include <stdlib.h>

/*
    - Cho 1 mảng 10 phần tử, 10 biến có value
    - Tìm con số nhỏ nhất trong mảng, đưa nó lên đầu mảng!!!
    IPO

    -5  10  100 -50 100 1001    1
*/

int main()
{
    int a[] = {-5, -10, -100, -50, 100, -1001, 1};

    int min = a[0];
    int pos = 0; // Mặc định nhỏ nhất là thằng đầu tiên
    int tmp;

    for (int i = 1; i < 8; i++)
    {
        if (a[i] < min)
        {
            // min phải đổi vai cho thằng a[i]
            min = a[i];
            pos = i; // Vị trí i thấy a[i] < min, min mới
        }
    }

    if (pos > 0)
    { // min nằm ở lưng chừng mảng -> hoán đổi
        tmp = a[0];
        a[0] = min;
        a[pos] = tmp;
    }

    for (int i = 0; i < 7; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}