#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int a[]);

int main() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        printf("Input number #%d: ", (i + 1));
        scanf("%d", &a[i]);
    }

    printf("Before sorting the array is\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    bubbleSort(a);

    return 0;
}

void bubbleSort(int a[]) {
    int tmp;
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1; j++) {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    printf("After using bubble sort, the array is\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}