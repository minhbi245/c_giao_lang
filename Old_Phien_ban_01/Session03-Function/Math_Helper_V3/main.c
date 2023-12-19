#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.14;  // BIẾN TOÀN CỤC, GLOBAL VARIABLE
                        // EM DỄ DÃI, HÀM NÀO CŨNG SỜ ĐƯỢC EM!!!
// Tư duy viết hàm cho bài MathHelper
// IPO: 
// Input: choice/bạn chọn gì thì mới tính tiếp được
void printMenu();
void computeDiskArea();

int main()
{
    int choice; // Sự lựa chọn - option

    // Chưa bằng 5 thì ko cho thoát
    do
    {
        printMenu();
        printf("Choose 1...5: ");
        scanf("%d", &choice);

        switch (choice) // if choice bằng mấy thì thực hiện câu lệnh
        {
        case 1:
            computeDiskArea();
            break;
        case 2:
            printf("You choose to compute the rectangle area\n");
            printf("Please input a width and lenght: ");
            break;
        case 3:
            printf("You choose to compute the triangle area\n");
            printf("Please input a, b, c to compute: ");
            break;
        case 5:
            printf("Bye bye. See you next time\n\n");
            break;
        default:
            break;
        }
    } while (choice != 5); // Chưa chọn 5 hả, làm tiếp đi, in menu, mời gọi

    return 0;
}

void printMenu()
{
    printf("\n=================================================\n");
    printf("Welcome to Math Helper program\n");
    printf("Choose the following functions to play with: \n\n");
    printf("1. Compute the disk area\n");
    printf("2. Compute the rectangle area\n");
    printf("3. Compute the triangle area\n");
    printf("4. Compute the ... area\n");

    printf("5. Quit\n");
}

void computeDiskArea()
{
    float radius, area;
    printf("You choose to compute disk area\n");
    printf("Please input a radius (> 0): ");
    scanf("%f", &radius);
    // area = 3.14 * radius * radius;
    // area = 3.14 * pow(radius, 2);
    // area = PI * pow(radius, 2);
    printf("The disk with r = %.2f has the area of %.2f\n", radius, (PI * pow(radius, 2)));
}
