#include <stdio.h>
#include <stdlib.h>

int main() {
    float c[10]; // có 10 biến float [0...]
    // scanf("%f", &c[0]);  tiếp tục thay 0, bằng 1, 2...

    printf("Please inut 10 grades of the C class: (0..10): \n");
    for(int i = 0; i < 10; i++) {
        printf("Input grade[%d]: ", i);
        scanf("%f", &c[i]);
    }

    printf("Here is your grades\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f\t", c[i]);
    }
    return 0;
}