#include <stdio.h>
#include <stdlib.h>
void f(int x);

int main()
{

    int x = 10;
    printf("In main(), before calling f() x is: %d\n", x); // 10

    f(x);

    printf("In main(), after calling f() x finally is: %d\n", x);

    return 0;
}

void f(int x)
{
    printf("In f(), x before ^2 is: %d\n", x);

    x *= x;

    printf("In f(), x after ^2 is: %d\n", x);
}