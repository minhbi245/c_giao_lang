#include <stdio.h>
#include <stdlib.h>

// in ra cac con so tu 1 den 100
// IPO
// Input: ko can gi ca, vi moi thu da ro, in tu 1...100
// Process: ko co gi phuc tap, printf();
// Output: in ra thoi

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        //i: index, chi muc, so dem
        //Bien sieu cuc bo, chi dung trong vong lap for
        if (i == 100)
        {
            printf("%d.\n", i);
        }
        else
        {
            printf("%d; ", i);
        }
    }
    int result;
    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= i; j++) {
            result = i * j;
            printf("%d * %d = %d \n", i, j, result);
        }
    }

    return 0;
}