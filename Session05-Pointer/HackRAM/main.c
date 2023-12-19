#include <stdio.h>
#include <stdlib.h>

// Lễ tình nhân 8.3, tặng phiếu mua hàng, $?
// Anh í có tặng mình tiền/phiếu mua hàng ko???
// ?&

int main() {
    int gift = 16164;   // trong ram lưu con số 4 byte
                        // 2 byte dưới ON/OFF thành con số 63 36

    int* hari = &gift;

    // char* hack = & biến char khác;
    // char* hack = & địa chỉ biến char khác;

    char* hack = &gift; // Hơi lầy, liều, cùng địa chỉ hoy mà!!!!
                        // Nhưng chỉ nhìn 1 byte hoy

    // Còn Hari, phải nhìn 4 byte lận

    // Hỏi Hari, em đang lưu tọa độ, địa chỉ gì?
    printf("Gift address = %u\n", hari); // Địa chỉ của Hari chứa từ gift, 6M72

    // Hỏi Hair đang trỏ đến value cụ thể nào??
    printf("Gift = %d\n", *hari); // Value: 16164

    // hỏi hack chứa đang trỏ kí tự gì?
    printf("Hack consist of: %c\n", *hack); // Char: $ | 72

    hack++; // Tăng lên 73, ko phải nhảy 4 byte lên 76 đâu, vì int mới nhảy 4 byte thôi
            // char* nhảy từng byte, vẫn xà quần trong gift;
    printf("After ++ finally hack consist of character: %c\n", *hack);
    printf("Address hack after ++: %u", hack);

    return 0;
}