#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Nhay don luu 1 ki tu,
    Ky tu dung 1 byte trong RAm ON OFF thanh ki tu V
    Ky tu dung %c  de chi cho CPU biet cach ON OFF
    Mo vao chip BIOS/UEFI tren main board de tim cach anh xa thanh ki tu tren man hinh
    Day la su phoi hop bao gom CPU + RAM + Keyboard + VGA + Printer + Monitor + HDD/SSD + BIOS/UEFI
    */
    char firstChar = 'V';
    char secondChar = 236;
    char inputFromKeyboard;
    printf("The first letter in your name is %c \n", firstChar);
    printf("The ASCII code of the letter %c code is %d\n", firstChar, firstChar);
    printf("The second letter is %c\n", secondChar);
    printf("The ASCII of the letter %c with the code %d\n", secondChar, secondChar);
    printf("Please input your character: ");
    fpurge(stdin);
    scanf("%c", &inputFromKeyboard);
    printf("You character you've just input like %c and have code is %d\n", inputFromKeyboard, inputFromKeyboard);
    return 0;
}