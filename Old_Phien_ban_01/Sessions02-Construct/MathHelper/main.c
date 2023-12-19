#include <stdio.h>
#include <stdlib.h>

// Writing the app help the children learn math basic
// App provide feature with menu 1 2 3 4 5 6...10, Quit
// Choose the feature with the number

// 1. Calculate the circle (IPO Input Process Output)
// 2. Calculate Rectangle (IPO)
// 3. Calculate...
//  10. Quit

// IPO all above of features

int main()
{
    int choice;
    float radius, area;

    printf("Welcome to Math Helper Program\n");
    printf("Please choose the following functions to play with\n");
    printf("1. Compute the disk area\n");
    printf("2. Compute the rectangle area\n");
    printf("3. Compute the triangle area\n");
    printf("4. Quit\n");

    printf("Choose 1...4: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You choose 1 to compute the disk area\n");
        printf("Please input the disk radius: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("The disk with r = %.2f has the are of %.2f\n", radius, area);
        break;

    case 2:
        break;

    case 3:
        break;

    case 4:
        printf("Bye bye, see you next time\n");
        break;

    default:
        printf("Please choose 1...4\n");
        break;
    }

    return 0;
}