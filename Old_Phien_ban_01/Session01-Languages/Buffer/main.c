#include <stdio.h>
#include <stdlib.h>

int main() {
    int yob, age;
    char fL;

    printf("You're required to input your profile\n");

    printf("1st, input your yob: ");
    scanf("%d", &yob);
    age = 2022 - yob;
    fpurge(stdin);
    printf("2nd, input 1st letter in your first name: ");
    scanf("%c", &fL);

    printf("Your profile is: \n");
    printf("Your yob: %d \n", yob);
    printf("Your age: %d \n", age);
    printf("Your first letter in you first name: %c\n", fL);

    int x, y;
    printf("You are required to input two integers\n");
    scanf("%d%d", &x, &y);

    printf("The sum of %d and %d is %d\n", x, y, (x + y));

    return 0;
}