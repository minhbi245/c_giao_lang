#include <stdio.h>
#include <stdlib.h>

// int main() {
//     int width, lenght, area;

//     printf("You are required to input the size of a rectangle \n");
//     printf("Input width: ");
//     scanf("%d", &width);
//     printf("Input the length: ");
//     scanf("%d", &lenght);

//     area = width * lenght;
//     printf("The area of a rectangle with width is %d and lenght is %d is %d", width, lenght, area);
// }

int main() {
    float radius, area;

    printf("Input a radius of a disk: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("The area of a disk with (r = %f) is %f\n", radius, area);
}