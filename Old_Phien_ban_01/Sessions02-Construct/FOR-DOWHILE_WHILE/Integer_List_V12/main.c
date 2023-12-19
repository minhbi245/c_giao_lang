#include <stdio.h>
#include <stdlib.h>

/*
    do {                                            while (còn đúng thì còn lặp/làm) {

        các lệnh cần lặp/cần làm lại ở đay               các lệnh cần lặp/làm lại ở đây;

    } while (còn đúng thì còn lặp/làm);             }

      mệnh đề so sánh cần phải đúng thì vòng lên
      do làm tiếp

      CỨ LÀM TRƯỚC ĐI;                                  NẾU THẤY ĐÚNG THÌ HÃY LÀM;
      NẾU THẤY ĐÚNG, CÒN ĐÚNG THÌ LÀM TIẾP              SAU ĐÓ THẤY ĐÚNG, CÒN ĐÚNG THÌ LÀM TIẾP;

      KO CHẶN DK TỪ SỚM, LÀM RỒI MỚI CHẶN               CHẶN ĐIỀU KIỆN TỪ SỚM, ĐÚNG MỚI CHO VÀO
      VÀO ĐI, SOÁT ĐIỀU KIỆN SAU!!!!!                   SOÁT VÉ TRƯỚC RỒI MỚI CHO VÀO

                            => LÀM SAO THOÁT ĐƯỢC DO-WHILE/WHILE???
                            DÙNG LỆNH BREAK; KHI NÀO BREAK;
                            LÀM CHO ĐIỀU KIỆN/MỆNH ĐỀ SO SÁNH KO CÒN ĐÚNG NỮA!!!
*/

int main()
{
    printf("Using standard FOR\n");
    for (int i = 1; i <= 100; i++)
        printf("%d \t", i);

    printf("\n\nUsing FOR -do^.\n");
    int count = 1;
    for (;;)
    {
        printf("%d\t", count);
        count += 1;
        if (count == 101)
            break;
    }

    printf("\n\nUsing DO-WHILE\n");
    count = 1; // SIDE EFFECT, HIỆU ỨNG/ TRÁI TIM BÊN LỀ!!!
               // TA KIỂM SOÁT KO KHÉO BIẾN COUNT, KẾT QUẢ CHẠY SAI!!!
               // MẤT KIỂM SOÁT GIÁ TRỊ BIẾN
               // TRƯỚC KHI XÀI, NHỚ RESET, TA ĐÃ KIỂM SOÁT GIÁ TRỊ
    do
    {
        printf("%d\t", count);
        count++; // Thiếu là toang

    } while (count <= 100); // Không quá 100 lần, 100 con số...

    printf("\n\nUsing DO-WHILE -do^.\n");
    count = 1;
    do
    {
        printf("%d\t", count);
        count++; // Thiếu là toang
        if (count == 101)
        {
            break;
        }

    } while (69 < 96);

    printf("\n\nUsing WHILE\n");
    // Coi chừng hiệu ứng lề, mất kiểm soát đk do count đang sẵn 101 của vòng lặp trước
    count = 1; // Cần reset lại biến count giá trị = 1;
    while (count <= 100)
    {
        printf("%d\t", count);
        count++; // Thiếu là toang
    }

    printf("\n\nUsing WHILE -do^.\n");
    count = 1; // Reset cho đúng, cực kỳ quan trọng, nếu reset sai thì kết quả while ở dưới không chạy đúng, và chạy vô tận
    while (1 == 1) {
        printf("%d\t", count);
        count++;
        if (count == 101) {
            break;
        }
    }
    printf("\n");
    return 0;
}