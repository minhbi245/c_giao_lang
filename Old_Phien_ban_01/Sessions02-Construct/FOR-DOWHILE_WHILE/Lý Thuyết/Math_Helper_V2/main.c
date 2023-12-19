#include <stdio.h>
#include <stdlib.h>

int main()
{

    int choice;
    float radius, area;

    do
    {
        printf("Welcome to Math Helper Program\n");
        printf("Please choose the following functions to play with\n");
        printf("1. Compute the disk area\n");
        printf("2. Compute rectangle area\n");
        printf("3. Compute the triangle area\n");
        printf("4. Quit\n");

        printf("Choose 1...4: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("You choose 1 to compute the disk area\n");
            printf("Please input a disk's area: "); // Gõ bán kính âm!!! (*)
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("The disk with r = %.2f has the area of %.2f \n", radius, area);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
        default:
            break;
        }
    } while (choice != 4); // Chừng nào còn chưa chọn 4, thì chơi tiếp đi mày
                           // Đúng là choice chưa bằng 4, thì chơi tiếp trong do

    return 0;
}