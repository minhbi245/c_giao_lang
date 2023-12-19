#include <stdio.h>
#include <stdlib.h>

void fv2(int x);

int main()
{
    int n;
    do
    {
        printf("Please enter the number:");
        scanf("%d", &n);
        if (n != 0)
        {
            fv2(n);
        }
    } while (n != 0);

    return 0;
}

void fv2(int x)
{
    int y = x * x;
    printf("y = f(x) = x^2; f(%d) = %d\n", x, y);
}