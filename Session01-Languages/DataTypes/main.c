#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10, b = 20;

    // Print value of a and b
    printf("a = %d, b = %d\n", a, b);

    // Define the specific area of variables a and b in RAM
    printf("a position = %u, b position = %u\n", &a, &b );

    a = 69;
    printf("a = %d, b = %d\n", a, b);

    // With type is double
    double c = 0.1, d = 3.14;
    printf("Value of c = %.2lf, and value of d = %.2lf\n", c, d);

    printf("c addr: %u, d addr: %u\n", &c, &d);
    
    //Function let we know the size of data types
    int size = sizeof(int);
    printf("The number of bytes allocated for int: %d\n", size);
    printf("The number of bytes allocated for double: %d\n", sizeof(double));
}