#include <stdio.h>
#include <stdlib.h>

/*
    - Viết đoạn code lưu thông tin của 5 con số nguyên
    - Viết hàm lưu 1 mảng các số nguyên và in ra 5 số nguyên
*/

void printIntegerList();
void printIntegerListHeap(); // Mình sẽ đi xin ram theo cách của mình, mình sẽ lưu 5, -10, 15, -20, 25, -30
                             // Éo chơi stack, xin RAM ở HEAP, đi khai hoang trên rừng

int main()
{
    printIntegerList();
    printf("\n");
    printIntegerListHeap();
    return 0;
}

void printIntegerListHeap()
{
    int *hari;
    int *p; // pointer, con trỏ, tao là 1 vùng ram, cũng là biến
            // nhưng tao ko lưu value bình thường, tao lưu địa chỉ, danh bạ
            // tao cần 1 tọa độ/địa chỉ nào đó.
    // p = &một biến int nào đó;
    // p = địa chỉ, một tọa độ/con số mà là địa chỉ
    // p = (int*)6000000;    // ép 6 triệu là địa chỉ
    //  byte 6M, +1 +2 +3 4byte của biến int nào đó

    p = (int *)malloc(24); // Đây là cú pháp xin Hệ điều hành Windows 24 byte, chia hết cho 4
                           // Vì chúng ta đang khai báo là kiểu int xin 4 byte
                           // Con trỏ int mai mốt sẽ nhảy 4 ++ hoặc --
                           // Hàm malloc() xin 24byte ở HEAP, cắm cọc, giăng dây 24 byte
                           // Chốt tọa độ đầu, byte đầu tiên, đưa địa chỉ đầu tiên đó cho p
                           // MALLOC -> VIẾT TẮT CỦA MEMORY ALLOCATION

    // -> p lưu địa chỉ đầu tiên của 24byte
    // p có mùi giống tên mảng, là biến quản lí/má mì, cai quản quản 24/4 = 6 cụm 4
    //                                                                      6 biến int
    // p giống tên mảng, vì lưu tọa độ cụm 4 đầu tiên, lưu đầu dãy
    // -> p được quyền dùng như mảng, túc là p[0] là 4 byte đầu tiên
    //                                       p[1] là tên  4 byte kế tiếp
    // khai báo con trỏ, xài như mảng
    p[0] = 5;
    p[1] = -10;
    p[2] = 15;
    p[3] = -20;
    p[4] = 25;
    p[5] = -30;

    printf("The array has value of (using HEAP)\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", p[i]);
    }
    printf("\n");
}

void printIntegerList()
{
    int a[] = {5, -10, 15, -20, 25, -30}; // Local array, mảng nằm trong STACK, 6 biến int nằm trong STACK

    printf("The array has values of\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", *(a + i)); // hoặc dùng a[i] ~ *(a + i) vì tên biến của mảng `a` là con trỏ chốt đầu mảng
    }

    printf("\n");
}