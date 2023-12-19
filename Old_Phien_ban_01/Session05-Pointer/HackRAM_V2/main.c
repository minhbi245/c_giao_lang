#include <stdio.h>
#include <stdlib.h>

/*
    Số nhà/ địa chỉ chỉ là 1 con số!!! Hiển nhiên
    Nhưng con số thì ko hẳn là số nhà!!! Hiển nhiên
    &yob -> con số, nhưng nó là số nhà, tọa độ của vùng RAM
            6M80
    
    Lật ngược vấn đề: - cheat engine: khi tao có 1 con số, và tao muốn nói rằng nó là tọa độ của 1 biến khác
    -> có cách nào convert con số bình thường thành địa chỉ ko???
    Xưa nay lấy tọa độ là dấu "&biến"
    Tụ nhiên bây giờ có 1 con số, và muốn nói rằng đó là địa chỉ
*/

int main() {
    int yob = 1993;
    int* myPointer;

    printf("The address of yob: %u\n", &yob);
    printf("Yob: %d\n", yob);

    // 1802807192 đại chỉ của yob, giờ giờ ta sẽ sửa ngày sinh của YOB

    // hari = &yob; éo còn gì để nói, này đơn giản rồi -> nó đã làm sẵn lấy số địa chỉ đồng thời ép kiểu (int*) con số địa chỉ tọa độ
    // hari = cần địa chỉ, cho em 1 địa chỉ int nào đó
    // hari = 1802807192    // Ghi thế này cũng ko ổn, vì đây là con số!!!
                            // Lầm lẫn với giá trị biến int là 1 con số nguyên
    // MÌNH PHẢI NHẤN, ĐÂY LÀ CON SỐ, NHƯNG LÀ ĐỊA CHỈ ĐÓ NHEN
    // NẾU LÀ ĐỊA CHỈ THÌ CẤT VÀO BIẾN ĐỊA CHỈ CON TRỎ int*

    myPointer = (int*)1837737896;   // Đây là ép kiểu/casting, éo chó thành mèo
                                    // Đưa bột vào khuông ra bánh
                                    // Đưa con số qua (int*) để ép kiểu thành địa chỉ
    printf("YOB now is (via Hari) %d\n", *myPointer);
    *myPointer = 2002;
    printf("Finally, YOB is (via Hari): %d\n", *myPointer);
    return 0;
}