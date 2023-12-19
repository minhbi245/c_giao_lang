#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // Input: first letter in your name
    char firstLetter;
    // Process: has first letter so use if check condition then print the result
    // Output: just print out the result, no need the varible to save value here
    printf("Welcome to Mac diviner.\n");
    printf("You are required to input the 1st letter in your first name.\n");
    printf("I will show you your destiny/fate\n");
    printf("Input your character: ");
    scanf("%c", &firstLetter);

    firstLetter = toupper(firstLetter);

    if (firstLetter == 'A')
    {
        printf("Dua cot khong phai la so truong cua ban!!!\n");
    }
    else
    {
        if (firstLetter == 'B')
        {
            printf("Ban nang gioi tinh cua ban rat tu nhien...\n");
        }
        else
        {
            if (firstLetter == 'C')
            {
                printf("Ban co tinh cam tu nhien, gan gui va rat than mat...\n");
            }
            else 
            {
                printf("Coming soon...\n");
            }
        }
    }

    return 0;
}