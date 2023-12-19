#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;

    printf("n = %d\n", n);
    printf("n add: %u\n", &n);

    // 1.
    n = n + 1;
    printf("n = %d\n", n);
    printf("n add: %u\n", &n);
    // 2.
    n += 1;
    printf("n = %d\n", n);
    printf("n add: %u\n", &n);
    //3.
    n++;
    printf("n = %d\n", n);
    printf("n add: %u\n", &n);

}