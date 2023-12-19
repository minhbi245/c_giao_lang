#include <stdio.h>
#include <stdlib.h>

// Tinh tong cua day so 1 + 2 + 3 + ... + 100
// Tinh tong tu 1 -> 100
// IPO

//Input:

//Process:

//Output:

int main() {
    int sum = 0; // VIP quan trong, neu khong se lay rac cong tiep la toang!!!
    int acc = 0; //accumulation - tich luy, gom gop, cong don

    printf("This program will show the sum of 100 first integer (1...100)\n");
    for (int i = 1; i <= 100; i++) {
        acc += i; // acc = acc + i;
    }

    printf("The sum is %d\n", acc);

    return 0;
}