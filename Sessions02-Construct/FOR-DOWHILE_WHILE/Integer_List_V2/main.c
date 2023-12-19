#include <stdio.h>
#include <stdlib.h>
// Viet app nho nho in ra cac so chan 1...100
// IPO
// Input: can so chan 1...100, vi du 2, 4, 6, 8, 10...
// Process: Tinh toan de loi ra duoc so chan, nho nhat la 2, nhar cach 2, 4, 6, 8

int main()
{
    printf("The list of even numbers from 1...100\n");
    // So chan: so chia het cho 2, khong co le mieng nao
    // Chia 2 du 0!!! so du la 0 trong phep chia 2
    // 4 % 2, % day la phep chia lay so du

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
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