#include <stdio.h>
#include <stdlib.h>
// Hiểu được cách đưa/truyền giá trị/đầu vào cho hàm
// Vẫn hàm quen thuộc y = f(x) = x * x

void f(int x);

int main()
{
    // f(5); 5 gán vào x hàm, gọi là hàm = 5, pass value cho hàm
    int x; // Đúng chuẩn scanf(x)
    printf("Please input x: ");
    scanf("%d", &x);

    // Hỏi nhà x trong main() ở đâu?
    printf("In main() x address is %u and value is %d\n", &x, x);
    f(x);

    return 0;
}

void f(int x)
{
    int y = x * x;
    printf("In f() x address is %u and value is %d\n", &x, x);

    printf("y = f(%d) = %d\n", x, y);
}