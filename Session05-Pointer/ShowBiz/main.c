#include <stdio.h>
#include <stdlib.h>

// Hari và Trần Thành đi Mĩ, Trấn Thành nói Hari xài tiền của Trấn Thành

int main()
{

    int tranThanh = 5000;
    // giả bộ Trấn Thành mua túi LV hết 1000$, hỏi TT còn bao nhiêu?
    // tranThanh = 4000; Câu này sai!!!, ko nói rằng đã tiêu 1k$, còn lại 4K$
    tranThanh -= 1000; // tranThanh = tranThanh - 1000; // Tăng giảm tự thân
    printf("After buying LV, Tran Thanh now has: %d$\n", tranThanh);

    // Hari ko đem ví, Trấn Thành bảo rằng anh sẽ lo cho cô!!!!
    // int hari = 300; // Kiểu biến bình thường, tạo một ví của Hari
    // int* hari = cần lắm luôn 1 địa chỉ của biến nào đó/tọa độ trong ram;
    // Một loại hộp mới, chứa value mới mẻ!!!
    // Ko phải value thông thường
    // Hộp danh bạ, chuyên đi lưu tọa độ, danh bạ, địa chỉ
    // value trong hộp là số điện thoại, địa chỉ nhà, số liên lạc tới ai đó/tọa độ nào đó trong RAM

    int* hari = &tranThanh; // Trấn Thành ơi ví anh để ở đâu chỉ cho em với
                            // Ví anh ở cái mông, em có thể lấy
                            // & chỉ tọa độ biến. lưu lại tọa độ
                            // Hari cầm trong tay tọa độ ví, địa chỉ ví, vị trí của ví

    // Vậy làm sao kiểm tra xem có đúng Hari có cầm trong tay ví của Trấn Thành hay ko?
    printf("Ví TranThanh is at %u\n", &tranThanh);

    // Hari tay em chạm ví Trấn Thành chưa?
    printf("Hari has in hand %u\n", hari);

    // Hari ơi, Trấn Thành có bao nhiêu tiền??? Vì Hari đang cầm ví
    printf("Hari said, Tran Thanh now hâs %d$\n", *hari);
    // Hari có danh bạ, có trong tay tọa độ/vị trí rồi, chạy đến chỗ đó mở ra xem
    // Biến được địa chỉ hộp thư rồi, chạy đến địa chỉ đó lấy quà
    // Biết được số thằng bạn, gọi nó
    // Có được vị trí của ví, đế sờ ví hoy!!!!
    // hari = tọa độ ví
    // *hari đến ví, sờ ví, sờ vùng RAM chứa value thật!!!!
    // *hari ~~~ biến Trấn Thành, vì chạm vùng ram của Trấn Thành
    // Lấy được value của vùng RAM Trấn Thành
    // Có quyền sửa vùng ram, vì sờ tiến là lấy được value và sửa được value
    
    // Hari mua đồ mất 3000 Dior
    *hari = *hari - 3000;

    // Hỏi Trân Thành còn bao nhiêu

    printf("Hari said, after buying Dior, 'TT now has %d$\n'", *hari);
    printf("Tran Thanh said, after Dior buy by Hari, 'TT now has %d$\n", tranThanh);

    // mày cho tao địa chỉ int* hari = &tranThanh; tao sẽ đến dọn nhà mày ngày nào đó
                             //*hari tương đương biến gốc tranThanh
    // sửa biến qua cách gián tiếp
    // tranThanh bị sửa qua biến khác, ko phải tranThanh tự -- hay ++
    // hari trỏ ví/tọa độ tranThanh
    // bien con trỏ là biến lưu tọa độ biến khác
    return 0;
}