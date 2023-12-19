#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, yob;
    printf("Welcome to the heaven bar\n");
    printf("Please show me you ID card or YOB: ");

    scanf("%d", &yob);
    age = 2023 - yob; // Cong thuc loai nguoi che ra

    if (age >= 18)
        printf("Ko say ko ve, let's chill!!!!\n");

    else
        printf("Hey you've just under 18, Go home kid!!!\n");
        // else co them tinh chat loai tru
        // nghia la CPU chay vao hem if, neu xong if,
        // xong if thi no se di luon khong them hoi else lam gi
        // khac hoan toan voi viec su dung hai lan if
        // Viec nay giup toi uu hoa CPU hon khi thuc hien xay dung 1 ung dung
        // co hang nghin dong code khac nhau co logic
    return 0;
}