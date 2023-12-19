#include <stdio.h>
#include <stdlib.h>

// WWrite an app input year of birth, then get output with the answer is enough age go to the bar
// Condition >= 18 could go to the bar
// So to resolve the problem this, what do we need?
// INPUT: Age, input the year of birth
// PROCESS: what do we need process? -> Decided for go to the bar or not and have an alert to the user to know
// OUTPUT: what's the result we need? -> Let's go to the bar or not

int main() {

    int yob, age;
    printf("Welcome to heaven bar\n");
    printf("Please show your ID card/yob: ");
    scanf("%d", &yob);

    age = 2023 - yob;
    if (age >= 18) {
        printf("Ko say ko ve. Say thi ve quai nao duoc. Let's chill\n");
    } else {
        printf("Hey rich kid. Go home now!!!!\n");
    }

    return 0;
}