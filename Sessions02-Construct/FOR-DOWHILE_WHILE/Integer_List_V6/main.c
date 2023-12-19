#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("The list of numbers from 1 to 100\n");
    int resultEvens = 0;
    // int count = 1;
    // for (;;) {
    //     printf("%d \t", count);
    //     count += 1;
    //     if (count == 100) {
    //         break; // dk thoat dat trong for;
    //     }
    // }

    for(int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\t", i);
            resultEvens += i;
        }
    }
    printf("\n");
    printf("%d\n", resultEvens);
    return 0;
}