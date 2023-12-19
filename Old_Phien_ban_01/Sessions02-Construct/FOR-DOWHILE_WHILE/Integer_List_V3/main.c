#include <stdio.h>
#include <stdlib.h>
// Viet app nho nho in ra cac so le 1...100
// IPO
// Input: can so chan 1...100, vi du 1, 3, 5, 7, 9...
// Process: Tinh toan de loi ra duoc so chan, nho nhat la 1, nhar cach 3, 5, 7, 9

int main()
{
    printf("The list of odd numbers from 1...1000\n");
    // So chan: so chia het cho 2, khong co le mieng nao
    // Chia 2 du 0!!! so du la 0 trong phep chia 2
    // 4 % 2, % day la phep chia lay so du

    for (int i = 1; i <= 1000; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");

    // for (int i = 2; i <= 100; i += 2)
    // {
    //     printf("%d\t", i);
    // } // Bai nay chi duoc 6,khong duoc 10, vi khong mang ngu nghia so chan
    return 0; 
}