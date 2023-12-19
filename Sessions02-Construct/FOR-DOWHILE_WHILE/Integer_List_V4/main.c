#include <stdio.h>
#include <stdlib.h>
// Viet app nho nho in ra cac so tu nhien 1...n (n > 1)
// IPO
// Input: can n truoc da, tuc la phai co n truoc da roi moi tinh duoc
// 1 variable n
// Process: ko so luon for va if neu can, mien for den dau, den n?
// Output: qua quen cho bai 1...1000, so le chan choi roi

int main()
{
    int n;
    printf("I am here to show the list of numbers from 1 to n (n > 1)\n");
    printf("Please input n > 1: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Do you know how to input a number > 1?\n");
    }
    else
    {
        printf("Again, the list of number from 1 to %d:\n", n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }

    return 0;
}