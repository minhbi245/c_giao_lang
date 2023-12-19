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
    //         [0]
    //              [1] có nhỏ hơn [0] hay ko, có đổi đi
    //          -10 -5
    //          -10      [2] có nhỏ hơn [0] hay ko, nếu có thì đổi
    //          -100 -5 -10    [3] có nhỏ hơn [0] hay ko, có đổi
    //          -100 -5 -10 -50 100 ... [5] có nhỏ hơn [0] hay ko, CÓ -> ĐỔI
    //          -1001 -10 -100 -50 100 -100 1
    int tmp;

    for (int i = 1; i < 7; i++)
    {
        if (a[i] < a[0])
        {                // đứng trước mà lại lớn hơn đứng sau, sai chỗ phải đổi
            tmp = a[0];  // cất a[0] đi
            a[0] = a[i]; // tao đầu dãy lấy value nhỏ hơn
            a[i] = tmp;  // a[0] cũ gán cho a[i]
        }
    }

    printf("After swapping, the array now is\n");

    for (int i = 0; i < 7; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}