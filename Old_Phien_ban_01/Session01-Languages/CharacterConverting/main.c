#include <stdio.h>
#include <stdlib.h>

int main() {

    char fL;
    printf("Input the 1st letter of your first name: ");
    scanf("%c", &fL);
    printf("You have just input the character: %c \n", fL);
    fL += 32;
    printf("And it is converted to lower case as            : %c \n", fL);
    printf("And it is converted to lower case as\t\t\t: %c \n", fL);
    return 0;
}