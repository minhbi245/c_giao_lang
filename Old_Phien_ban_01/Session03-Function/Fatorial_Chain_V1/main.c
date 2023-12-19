#include <stdio.h>
#include <stdlib.h>

int getFactorial(int n); // V4 - soái ca - reuse!!!!
int calculateSumFactorialWith(int n);
int main()
{
    // printf("The reuslt of 0!: %d\n", getFactorial(0));
    // printf("The reuslt of 3!: %d\n", getFactorial(3));

    // REUSE BẮT ĐẦU
    // Tính tổng 1! + 2! + 3! + 4! + 5!
    //           1 +  2  + 6  + 24 + 120

    // int sumFactorial = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4) + getFactorial(5);
    int sumFactorial = calculateSumFactorialWith(5);
    printf("Sum of factorial chain from 1! to 5! = %d\n", sumFactorial);
    return 0;
}
/*
int getFactorial(int n)
{
    int acc = 1;

    if (n == 0 || n == 1)
    {
        return 1;
    }

    for (int i = 2; i <= n; i++)
    {
        acc *= i;
        // return acc; // TOANG, RETURN QUÁ SỚM, TÍNH FOR XONG MỚI RETURN
    }
    return acc;
}
*/

int getFactorial(int n)
{
    int acc = 1;

    if (n == 0 || n == 1)
    {
        return 1;
    }

    for (int i = 2; i <= n; i++)    // Chưa xét n < 0
    {
        acc *= i;
    }
    return acc;
}

int calculateSumFactorialWith(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += getFactorial(i);
    }

    return sum;
}