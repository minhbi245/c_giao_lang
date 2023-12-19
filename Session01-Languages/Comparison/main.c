#include <stdio.h>
#include <stdlib.h>

int main() {

    int x;
    printf("Input an intege. I will check if this number is in the range of [1...100] or not\n");
    printf("Input an integer: ");
    scanf("%d", &x);
    int result;
    result = x < 1 || x > 100;

    if (result) {
        printf("Your value you are input is out of range [1...100]");
    } else {
        printf("Your value you are input is not out of range [1...100]");
    }

    return 0;
}