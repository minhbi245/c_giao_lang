#include <stdio.h>
#include <stdlib.h>

// Ki thuật khai báo mảng và gán luôn giá trị
// int a = 10; // mảng có trò này ko. Có

int main()
{
    // Mảng giống như tập hợp/dãy value ở toán học phổ thông!!!
    float c[10] = {1, 1, 2, 3, 5, 8}; // Cho 6 diểm thôi, mà lại có 10 biến
                                      // Gán value ngay cho 6 phần tử đầu của mảng
                                      // [0] = 1; [5] = 8;
                                      // Biến còn lại value DEFAULT = 0; KO RÁC LUNG TUNG

    printf("Your ten grades\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Grade [%d]= %.2f\n", i, c[i]);
    }

    float col[] = {2, 4, 6, 8, 10};
    // Câu lệnh này ko nói rõ có bao nhiêu biến được cấp
    // Nhưng lại gán sẵn value cho 1 số biên.
    // Mảng sẽ tự động được cấp  số biên tùy theo số lương value được gán; ở đây là 5
    // Bài này chính là mảng [5]

    // float a[]; bị chủi vì ko nói rõ bao nhiêu biên
    // Phải nói rõ số biến cần xin, gán value sau cũng được
    // vừa xin bao nhiêu, vừa gán
    // Vùa gán, mà ko thèm nói xin, thì sẽ cấp theo số gán

    return 0;
}