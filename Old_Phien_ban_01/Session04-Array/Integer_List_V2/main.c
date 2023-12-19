#include <stdio.h>
#include <stdlib.h>

// Nhập 1 mảng 10 con số từ bàn phím, Kiểm tra xem số 10 
// Có xuất hiện trong mảng hay ko

// IPO
// Input: 10 biến
// Process: Lôi từng biến ra hỏi value == 10 không?, có thì kết luận
// Output: in ra có hay ko?

int main() {

    int a[] = {5, -1000, 100, 50, 70, 6, -1, 10, 8, 20};
    /*
        Nên nhớ, ta có 10 biến int đó heng a[0], a[1], ....
        Bình đăng mọi biến int khác, như int yob;
        Duyệt mảng, quét từ đầu đến cuối mảng
    */

   for (int i = 0; i < 10; i++) {
        if (a[i] == 10) {
            printf("Hey, found 10 at position of %d\n", i);
            break;
        } 
   } // Logic: làm sao in được 1 câu không thấy, ko in nhiều câu!!!
   // Khi nào được quyền kết luận ko thấy!!!!
   // So sánh hết rồi, mà vẫn ko thấy == 10 thì mới được quyền kết luận
   // TÌM BẰNG CHỨNG MỚI DÁM KẾT LUẬN
   // BIẾN CỜ - FLAG NGUYÊN TẮC SUY ĐOÁN VÔ TỘI

    /*
        Giả bộ rằng 10 KO xuất hiện từ đầu tiên
        đi hỏi phần tử 1, mày có == 10 ko, dạ em ko, GIẢ BỘ ĐANG ĐÚNG
        đi hỏi phần tử 2, mày có == 10 ko, dạ em ko, ...
        đi hỏi phần tử thứ i, mày có == 10, dạ em có, bắt được mày rồi
        Cờ Phất lên, ko hỏi nữa!!!! BREAK, TÌM THẤY RỒI HỎI TIẾP CHI NỮA

        QUY ƯỚC:    CỜ = 0; KO TÌM THẤY
                    CỜ = 1; TÌM THẤY EM 10
        KĨ THUẬT ĐẶT CỜ CHƠI VỚI NHIỀU DỮ LIỆU
        TA PHẢI GIẢ ĐỊNH 1 ĐIỀU GÌ ĐÓ TỪ BAN ĐẦU
        SẼ PHẤT KHI DATA CÓ ĐIỀU GÌ ĐẶC BIỆT!!!

    */


    return 0;
}