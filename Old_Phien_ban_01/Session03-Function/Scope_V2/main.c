#include <stdio.h>
#include <stdlib.h>

// Mình có xài đồ nhà người khác được hem?
// Anh có nhìn thấy em ko?

int yob = 2022;

void printYob();
void printLatestYob();
void seeNothing();

int main() {
    seeNothing();
    printf("In main(), your yob is: %d\n", yob);
    return 0;
}

void printYob() {
    int age = 2022 - yob;   // Hợp lệ vì yob là global
                            // Age là local
}

void printLatestYob() {
    // printf("Your age is: %d\n", age);
}

void seeNothing() {
    int yob = 2010; // Biến local trùng tên với global
                    // Ưu tiên ở gần, ưu tiên người nhà, ưu tiên trong scope
    printf("In seeNothing(), your yob is: %d\n", yob);
}