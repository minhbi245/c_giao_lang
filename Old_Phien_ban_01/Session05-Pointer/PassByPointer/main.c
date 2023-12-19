#include <stdio.h>
#include <stdlib.h>

// CHO TAO ĐỊA CHỈ, TAO SẼ DỌN NHÀ MÀY!!!

void fx(int x);   // Mỗi lần xài hàm, hãy đưa tui 1 value bình thường hoy, tui cần 5 10 15 20 25 hay biến int bình thường!!!
                // Đây là cách truyền THAM TRỊ, chỉ cần thảy 1 value/ 1 giá trị là okie. GIÁ TRỊ THƯỜNG NHA

void fxPointer(int* x); // Mỗi lần xài hàm, đừng đưa value bình thường 5 10 15 20, tui ko cần
                // Đây là truyền THAM CHIẾU, CHIẾU TỪ XA
                // TAO CẦN 1 TỌA ĐỘ, CHO TAO TỌA ĐỘ NÀO ĐÓ, XA GẦN ÉO QUAN TÂM
                // ĐƯA TỌA ĐỘ, KO ĐƯA VALUE THƯỜNG
                // TAO CẦN ĐỊA CHỈ BIẾN INT Ở ĐÂU ĐÓ, LÁT TAO DỌN NHÀ NÓ!!!

// LOGIC, *x sẽ chính là bản gốc, biến ở xa xa nào đó

int main() {

    int x = 10;     // Biến local
    printf("In main, before calling f() x is: %d\n", x);

    fxPointer(&x);

    printf("In main, after calling f() x is: %d\n", x);

    return 0;
}

// *** CHỐT DEAL: MUỐN THAY ĐỔI GIÁ TRỊ Ở NƠI GỌI HÀM, THÌ CẦN ĐƯA ĐỊA CHỈ CHO HÀM, HÀM SẼ THAY ĐỔI NƠI GỐC GỌI HÀM ***

void fxPointer(int* x) {     // Biến local khác
    *x = *x * *x; //
    /*
        *x =       *x      *        *x;

        biến-xa = biến xa  Phép nhân Biến-xa
        x-main =    x-main      *     x-main
        *x -> *con-trỏ là đến nơi xa, ví Trấn Thành Đó, ví Tiến Đạt đó
        trong hàm làm phép nhân, chết mẹ, ở xa bị ảnh hưởng
        *hari làm gì, ví trấn thành hết tiền!!!!
    */ 
}

void fx(int x) {

}