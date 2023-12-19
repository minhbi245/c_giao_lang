#include <stdio.h>
int get_int(const char *prompt)
{
    int value;
    printf("%s", prompt);  // Hiển thị dòng chữ cho người dùng.
    scanf("%d", &value);   // Đọc giá trị nguyên từ người dùng.
    return value;
}
int main(void) {
    int n;
    do 
    {
        n = get_int("Width: ");
    } while (n < 1);

    for (int i = 0; i < n; i++) 
    {
        printf("?");
    }
    printf("\n");
    return 0;
}